int main ();
  void foo()
  {
      char a[8]; // holds two 4-byte ints
      for (int i = 0; i < sizeof(a); i++)
      {
          ((int*)a)[i] = i;
      }
  }
