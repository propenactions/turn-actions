class FooBar
{
      int n; //Stored in stack?

      public:

          int pubVar; //stored in stack?

          void foo(int param)  //param stored in stack
          {
                int *pp = new int; //int is allocated on heap.
                n = param;
                static int nStat;  //Stored in static area of memory
                int nLoc;          //stored in stack?
                string str = "mystring"; //stored in stack?
                ..
                if(CONDITION)
                {
                    static int nSIf; //stored in static area of memory
                    int loopvar;     //stored in stack
                    ..
                }
          }
}

int main(int)
{
     Foobar bar;    //bar stored in stack? or a part of it?

     Foobar *pBar;  //pBar is stored in stack

     pBar = new Foobar();  //the object is created in heap?  What part of the object is stored on heap

}
