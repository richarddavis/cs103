bool imConvincedAreEqual(string p1, string p2, string certificate) {
  // Returns true if p1 and p2 are both turing machines that have the same language, false otherwise.
}

// Creat a turing machine that does not accept any strings
int tm2(string inp) {
  return false;
}

int main() {
  string me = mySource();
  string m2 = "int tm2(string inp) {return false;}";
  string input = getInput();

  for (i = 0 to infinity) {
    for (each string c of length i) {
      if (imConvincedAreEqual(me, m2, c)) {
	return true;
      } 
    }
  }
}

  
