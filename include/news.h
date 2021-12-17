#include"article.h"
#include<string>
using std::string;


Article* GetTopHeadlines(string country)
{
    //fetch top headlines from api for given country
    //return array of articles
    //return nullptr if 0 results
}


Article* GetBookmarkedArticles()
{
    //validate token and get user details
    //fetch bookmarked articles for given user from database
    //return article array
    //return nullptr if 0 results 
}

Article* GetSearchArticles(string query)
{
    //query api for articles
    //if results.length > 0 retur array
    //return nullptr if 0 results
}

Article* GetLatestForCategory(string category)
{
    //fetch latest articles for given category from api
    //return array of results
    //return nullptr if 0 results
}

bool AddBookmark(Article article)
{
    //validate token and article
    //save to bookmarks in database
    //return true if sucessful else false
}

bool CheckIfBookmaked(Article article)
{
    //validate token and article
    //check if the article exists in bookmarked database
    //return true if exists else false
}

string* GetTopics()
{
    //validate token
    //fetch topics for given user from database
    //return topics array
    //return nullptr if emtpy array
}

bool AddTopic(string topic)
{
    //validate token and topic
    //check if topic already exists
    //add to database
    //return true if sucessful
}

bool DeleteTopic(string topic)
{
    //validate token and topic
    //if topic exists in database delete
    //return true if sucessful
}

