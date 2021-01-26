#include <string.h>
#include <stdio.h>


#define __MAX_ARTICLES__ 255


struct article
{
    int id;
    char title[20];
    char description[255];
};
typedef struct article Article;


Article articles[__MAX_ARTICLES__];
int articlesCount = 0;


int getArticleCount()
{
    return articlesCount;
}


int isValidId(int articleId)
{
    if (getArticleCount() == 0)
    {
        return 0;
    }

    if (articleId <= 0 || articleId > __MAX_ARTICLES__)
    {
        return 0;
    }

    return 1;
}


int addArticle(char* title, char* description)
{
    if (articlesCount >= __MAX_ARTICLES__)
    {
        //Fehler: Maximale Anzahl an Artikeln erreicht
        return 0;
    }

    Article newArticle;
    articlesCount++;
    newArticle.id = articlesCount;
    strcpy(newArticle.title, title);
    strcpy(newArticle.description, description);

    articles[newArticle.id] = newArticle;

    return 1;
}


void printArticleTitle(int articleId)
{
    if (isValidId(articleId))
    {
        printf("%s", articles[articleId].title);
    }
    else
    {
        printf("---");
    }
}


void printArticleDescription(int articleId)
{
    if (isValidId(articleId))
    {
        printf("%s", articles[articleId].description);
    }
    else
    {
        printf("---");
    }
}