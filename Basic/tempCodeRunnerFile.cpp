bool isLogin()
{
    std::string loginUsername, loginPassword;
    // bool loginLoop = true;

    printf("Username :  \n");
    std::cin>>loginUsername;;
    printf("Password :  \n");
     std::cin>>loginPassword;;

    for (int i = 1; i <= mainIndex; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (loginUsername == username[i][j] && loginPassword == password[i][j])
            {
                return true;
                // loginLoop = false;
            }
            else
            {
                return false;
            }
        }
    }
}