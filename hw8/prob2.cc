bool imConvincedIsPasswordChecker(string program, string certificate) { 
  /* ... some implementation ... */ 
}

int main() {
  string me = mySource();
  string input = getInput();

  bool actualAnswer = (input == p);

  for (int i = 0 to infinity) {
    for (each string c of length i) {
      if (!imConvincedIsPasswordChecker(me, c)) {
	if (actualAnswer) {
	  accept();
	} else {
	  reject();
	}
      }
    }
  }
}
