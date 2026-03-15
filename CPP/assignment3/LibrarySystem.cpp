#include<iostream>
using namespace std;

class Book
{
public:
    int id;
    string title;
    int qty;
};

class Member
{
public:
    int id;
    string name;
    int issuedBook;   
};

class Library
{
    Book b[50];
    Member m[50];

    int bcount;
    int mcount;

public:

    Library()
    {
        bcount = 0;
        mcount = 0;
    }

    void addBook()
    {
        cout<<"Enter Book Id Title Quantity\n";
        cin>>b[bcount].id>>b[bcount].title>>b[bcount].qty;
        bcount++;
    }

    void removeBook()
    {
        int id;
        cout<<"Enter Book Id\n";
        cin>>id;

        for(int i=0;i<bcount;i++)
        {
            if(b[i].id == id)
            {
                for(int j=i;j<bcount-1;j++)
                    b[j] = b[j+1];

                bcount--;
                cout<<"Book Removed\n";
                return;
            }
        }
        cout<<"Book Not Found\n";
    }

    void searchBook()
    {
        int id;
        cout<<"Enter Book Id\n";
        cin>>id;

        for(int i=0;i<bcount;i++)
        {
            if(b[i].id == id)
            {
                cout<<b[i].id<<" "<<b[i].title<<" "<<b[i].qty<<endl;
                return;
            }
        }
        cout<<"Book Not Found\n";
    }

    void showBooks()
    {
        for(int i=0;i<bcount;i++)
            cout<<b[i].id<<" "<<b[i].title<<" "<<b[i].qty<<endl;
    }

    void addMember()
    {
        cout<<"Enter Member Id Name\n";
        cin>>m[mcount].id>>m[mcount].name;
        m[mcount].issuedBook = -1;
        mcount++;
    }

    void removeMember()
    {
        int id;
        cout<<"Enter Member Id\n";
        cin>>id;

        for(int i=0;i<mcount;i++)
        {
            if(m[i].id == id)
            {
                for(int j=i;j<mcount-1;j++)
                    m[j] = m[j+1];

                mcount--;
                cout<<"Member Removed\n";
                return;
            }
        }
        cout<<"Member Not Found\n";
    }

    void searchMember()
    {
        int id;
        cout<<"Enter Member Id\n";
        cin>>id;

        for(int i=0;i<mcount;i++)
        {
            if(m[i].id == id)
            {
                cout<<m[i].id<<" "<<m[i].name<<" "<<m[i].issuedBook<<endl;
                return;
            }
        }
        cout<<"Member Not Found\n";
    }

    void showMembers()
    {
        for(int i=0;i<mcount;i++)
            cout<<m[i].id<<" "<<m[i].name<<" "<<m[i].issuedBook<<endl;
    }

    void issueBook()
    {
        int mid,bid;

        cout<<"Enter Member Id and Book Id\n";
        cin>>mid>>bid;

        for(int i=0;i<mcount;i++)
        {
            if(m[i].id == mid)
            {
                if(m[i].issuedBook != -1)
                {
                    cout<<"Member already has book\n";
                    return;
                }

                for(int j=0;j<bcount;j++)
                {
                    if(b[j].id == bid && b[j].qty > 0)
                    {
                        m[i].issuedBook = bid;
                        b[j].qty--;
                        cout<<"Book Issued\n";
                        return;
                    }
                }
            }
        }
        cout<<"Issue Failed\n";
    }

    void returnBook()
    {
        int mid;
        cout<<"Enter Member Id\n";
        cin>>mid;

        for(int i=0;i<mcount;i++)
        {
            if(m[i].id == mid && m[i].issuedBook != -1)
            {
                int bid = m[i].issuedBook;

                for(int j=0;j<bcount;j++)
                {
                    if(b[j].id == bid)
                    {
                        b[j].qty++;
                        m[i].issuedBook = -1;
                        cout<<"Book Returned\n";
                        return;
                    }
                }
            }
        }
        cout<<"Return Failed\n";
    }
};

int main()
{
    Library lib;
    int ch;

    while(1)
    {
        cout<<"\n1 Add Book";
        cout<<"\n2 Remove Book";
        cout<<"\n3 Search Book";
        cout<<"\n4 Display Books";
        cout<<"\n5 Register Member";
        cout<<"\n6 Remove Member";
        cout<<"\n7 Search Member";
        cout<<"\n8 Display Members";
        cout<<"\n9 Issue Book";
        cout<<"\n10 Return Book";
        cout<<"\n0 Exit\n";

        cin>>ch;

        switch(ch)
        {
            case 1: lib.addBook(); break;
            case 2: lib.removeBook(); break;
            case 3: lib.searchBook(); break;
            case 4: lib.showBooks(); break;
            case 5: lib.addMember(); break;
            case 6: lib.removeMember(); break;
            case 7: lib.searchMember(); break;
            case 8: lib.showMembers(); break;
            case 9: lib.issueBook(); break;
            case 10: lib.returnBook(); break;
            case 0: return 0;
        }
    }
}