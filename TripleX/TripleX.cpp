 #include <iostream>
 #include <ctime>
void PrintIntroduction(int Diffuculty)
    {
    std::cout << "\n\nYou are a a secret agent breaking into a level " << Diffuculty;
    std::cout << " secure server room...Enter the correct digits to continue...\n\n";
    }

    



bool PlayGame(int Diffuculty)
{
    PrintIntroduction(Diffuculty);

    // Declare 3 number code 

    const int CodeA = rand() % Diffuculty + Diffuculty;
    const int CodeB = rand() % Diffuculty + Diffuculty;
    const int CodeC = rand() % Diffuculty + Diffuculty;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;  
    // Explanation of the game 
    
    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give: " << CodeProduct;
    std::cout << "\n";
    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n+ Well done agent! You have extracted a file! Keep going!";
        return true;
    } 
    else
    {
        std:: cout << "\n- You entered the wrong code!Careful Agent! Try again!";
        return false;
    
    }
}
int main()
{
    srand(time(NULL));
    int LevelDiffuculty = 1;6+
    int const MaxDiffuculty = 5;  
    while (LevelDiffuculty <= MaxDiffuculty & true) // Loop the game until all levels are completed 
    {
        bool bLevelComplete = PlayGame(LevelDiffuculty);
        std::cin.clear();  // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDiffuculty;
        } 
    }
    std::cout << "\n\n *** Great work agent! You got all the files! Now get out of there! ***";

    return 0;
}