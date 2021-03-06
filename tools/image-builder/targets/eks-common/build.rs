use std::process::{exit, Command};

fn main() -> Result<(), std::io::Error> {
    let ret = Command::new("txbuild").arg("generate-target").status()?;
    if !ret.success() {
        exit(1);
    }
    Ok(())
}
