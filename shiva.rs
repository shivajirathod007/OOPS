use std::collections::HashMap;

struct Account {
    account_number: String,
    balance: f64,
}

impl Account {
    fn new(account_number: String) -> Account {
        Account {
            account_number,
            balance: 0.0,
        }
    }

    fn deposit(&mut self, amount: f64) {
        self.balance += amount;
    }

    fn withdraw(&mut self, amount: f64) -> Result<(), String> {
        if self.balance >= amount {
            self.balance -= amount;
            Ok(())
        } else {
            Err("Insufficient balance.".to_string())
        }
    }

    fn get_balance(&self) -> f64 {
        self.balance
    }
}

struct Bank {
    accounts: HashMap<String, Account>,
}

impl Bank {
    fn new() -> Bank {
        Bank {
            accounts: HashMap::new(),
        }
    }

    fn create_account(&mut self, account_number: String) {
        if !self.accounts.contains_key(&account_number) {
            let account = Account::new(account_number.clone());
            self.accounts.insert(account_number, account);
            println!("Account created successfully.");
        } else {
            println!("Account already exists.");
        }
    }

    fn deposit(&mut self, account_number: &str, amount: f64) -> Result<(), String> {
        if let Some(account) = self.accounts.get_mut(account_number) {
            account.deposit(amount);
            Ok(())
        } else {
            Err("Account not found.".to_string())
        }
    }

    fn withdraw(&mut self, account_number: &str, amount: f64) -> Result<(), String> {
        if let Some(account) = self.accounts.get_mut(account_number) {
            account.withdraw(amount)
        } else {
            Err("Account not found.".to_string())
        }
    }

    fn get_balance(&self, account_number: &str) -> Option<f64> {
        if let Some(account) = self.accounts.get(account_number) {
            Some(account.get_balance())
        } else {
            None
        }
    }
}

fn main() {
    let mut bank = Bank::new();

    bank.create_account("1234567890".to_string());
    bank.deposit("1234567890", 1000.0).unwrap();
    bank.withdraw("1234567890", 500.0).unwrap();
    let balance = bank.get_balance("1234567890");

    match balance {
        Some(amount) => println!("Current balance: {}", amount),
        None => println!("Account not found."),
    }
}
