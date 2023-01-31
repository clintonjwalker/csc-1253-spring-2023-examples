int main()
{
    /*
    The integer numberInt has been declared.
    It has not been assigned a value by the
    programmer at this point.
    It may have a default value assigned to it,
    but this is not universal behavior.
    This declared integer may be defaulted to the
    value of 0.
    */
    int numberIntDeclared;

    /*
    Initialization is the step that takes place below.
    This is when the declared variable is provided
    its initial value and is universally safe to use.
    */
    int numberIntInitialized = 100;

    /*
    This next step is an example of assignment of an
    already declared and initialized variable.
    This means that the value which the variable was
    previously initialized to will be overwritten.
    */
    numberIntInitialized = 20;

    /*
    At the end of the program lifecycle the previously
    declared variables will all be destroyed and
    disposed of.
    */
}