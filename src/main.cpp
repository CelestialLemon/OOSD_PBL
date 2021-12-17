#include<iostream>
#include<string>
#include"../include/auth.h"
#include"../include/db.connect.h"
#include"../include/news.h"

using std::string;

void ShowError()
{
    //log errors and display to user
}

bool Logout()
{
    //return if user has logout
}

int main()
{
    ConnectToDatabase("");

    int currentTab = 0;
    Article* articles;
    if(Login())
    {
        while(!Logout())
        {
            switch(currentTab)
            {
                case 0:
                articles = GetTopHeadlines("India");
                break;

                case 1:
                    articles = GetBookmarkedArticles();
                    break;

                case 2:
                    articles = GetSearchArticles("topic");
                    break;

                case 3:
                    articles = GetSearchArticles("query");
                    break;

                case 4:
                    articles = GetLatestForCategory("category");
                    break;

                default:
                    ShowError();

            }
        }
    }
    return 0;
}