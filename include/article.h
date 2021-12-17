#pragma once
#include<string>
using std::string;

class Article
{
    string source_name;
    int source_id;

    string author_name;
    string title;
    string description;
    string url;
    string urlToImage;
    string publishedAt;
    string content;

public:
    void RenderImage();
    void Expand();
    void Collapse();
    void RedirectToUrl();
    void Bookmark();
};