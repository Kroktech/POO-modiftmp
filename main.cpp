#include <iostream>
#include <conio.h>
#include <string>
#include <vector>


//  test pour l'index qui bouge 


//int main()
//{
    /*int idx_place = 0;
    while (true)
    {

        char* idx = nullptr;
        char key = _getch();
        switch (key)
        {
        case 'Z':
        case 'z':
            if (idx_place > 0)
                --idx_place;
            system("cls");
            break;

        case 'S':
        case 's':
            if (idx_place < 4)
                ++idx_place;
            system("cls");
            break;
        }
        for (int i = 0; i < 5; ++i)
        {
            if (i == idx_place)
                std::cout << "-> " << " je suis la " << std::endl;

            else
                std::cout << "   " << " je suis la " << std::endl;





        }

    }*/
    //
    //	return 0;
    //}



    // test pour afficher diférente action



    //class Choice_Begin_Action
    //{
    //public:
    //	virtual ~Choice_Begin_Action() = default;
    //	virtual void Action() = 0;
    //		
    //};
    //class Choice_Begin_Action_1 : public Choice_Begin_Action
    //{
    //private:
    //	std::string m_Choice_Begin_Action_1 = "New character ";
    //public:
    //	void Action()
    //	{
    //		std::cout << m_Choice_Begin_Action_1 << std::endl;
    //	}
    //};
    //class Choice_Begin_Action_2 : public Choice_Begin_Action
    //{
    //private:
    //	std::string m_Choice_Begin_Action_2 = "Load character ";
    //
    //public:
    //	void Action()
    //	{
    //		std::cout << m_Choice_Begin_Action_2 << std::endl;
    //	}
    //
    //};
    //class Choice_Begin_Action_3 : public Choice_Begin_Action
    //{
    //private:
    //	std::string m_Choice_Begin_Action_3 = "Help ";
    //
    //public:
    //	void Action()
    //	{
    //		std::cout << m_Choice_Begin_Action_3 << std::endl;
    //	}
    //
    //};
    //class Choice_Begin_Action_4 : public Choice_Begin_Action
    //{
    //private:
    //	std::string m_Choice_Begin_Action_4 = "Quit ";
    //public:
    //	void Action()
    //	{
    //		std::cout << m_Choice_Begin_Action_4 << std::endl;
    //	}
    //};
    //void initalize_Choice_1()
    //{
    //	std::vector<Choice_Begin_Action* > choice_1;
    //	choice_1.push_back(new Choice_Begin_Action_1);
    //	choice_1.push_back(new Choice_Begin_Action_2);
    //	choice_1.push_back(new Choice_Begin_Action_3);
    //	choice_1.push_back(new Choice_Begin_Action_4);
    //    int idx_place = 0;
    //    bool boucle= true;
    //    while (boucle)
    //    {
    //
    //      
    //        for (int i = 0; i < choice_1.size(); ++i)
    //        {
    //            if (i == idx_place)
    //            {
    //                std::cout << "-> ";
    //
    //            }
    //
    //            else
    //            {
    //                std::cout << "   ";
    //
    //            }
    //            choice_1[i]->Action();
    //
    //
    //
    //        }
    //
    //        char key = _getch();
    //        switch (key)
    //        {
    //        case 'Z':
    //        case 'z':
    //            if (idx_place > 0)
    //                --idx_place;
    //            system("cls");
    //            break;
    //
    //        case 'S':
    //        case 's':
    //            if (idx_place < choice_1.size()-1)
    //                ++idx_place;
    //            system("cls");
    //            break;
    //        default:
    //           boucle = false;
    //            break;
    //        }
    //       
    //
    //        
    //    }
    //
    //    for (auto i = 0; i < choice_1.size(); ++i)
    //    {
    //        delete choice_1[i];
    //        choice_1[i] = nullptr;
    //    }
    //    choice_1.clear();
    //    
    //
    //
    //
    //
    //}
    //
    //int main()
    //{
    //    initalize_Choice_1();
    //   
    //	return 0;
    //
    //}

    //test affichage action globale

void Vector_Choice_Begin();
void Vector_Choice_NewCharacter();

class Choice_Begin_Action
{
public:
    virtual ~Choice_Begin_Action() = default;
    virtual void Action() = 0;
    virtual void NextAction() = 0;
    virtual void PreviousAction() = 0;

};
class Choice_Begin_Action_1 : public Choice_Begin_Action
{
private:
    std::string m_Choice_Begin_Action_1 = "New character ";
public:
    void Action()
    {
        std::cout << m_Choice_Begin_Action_1 << std::endl;
    }
    void NextAction()
    {
        Vector_Choice_NewCharacter();
    }
    void  PreviousAction()
    {

    }
};
class Choice_Begin_Action_2 : public Choice_Begin_Action
{
private:
    std::string m_Choice_Begin_Action_2 = "Load character ";

public:
    void Action()
    {
        std::cout << m_Choice_Begin_Action_2 << std::endl;
    }
    void NextAction()
    {

    }
    void  PreviousAction()
    {

    }
};
class Choice_Begin_Action_3 : public Choice_Begin_Action
{
private:
    std::string m_Choice_Begin_Action_3 = "Help ";

public:
    void Action()
    {
        std::cout << m_Choice_Begin_Action_3 << std::endl;
    }
    void NextAction()
    {

    }
    void  PreviousAction()
    {

    }
};
class Choice_Begin_Action_4 : public Choice_Begin_Action
{
private:
    std::string m_Choice_Begin_Action_4 = "Quit ";
public:
    void Action()
    {
        std::cout << m_Choice_Begin_Action_4 << std::endl;
    }
    void NextAction()
    {

    }
    void  PreviousAction()
    {

    }
};


class Choice_Newcharacter_Action
{
public:
    virtual ~Choice_Newcharacter_Action() = default;
    virtual void Action() = 0;
    void vecor()
    {

    }

};
class Choice_Newcharacter_Action_1 : public Choice_Begin_Action_1
{
private:
    std::string m_Choice_Newcharacter_Action_1 = "Personal information ";
public:
    void Action()
    {
        std::cout << m_Choice_Newcharacter_Action_1 << std::endl;
    }
    void  PreviousAction()
    {
        Vector_Choice_Begin();
    }

};
class Choice_Newcharacter_Action_2 : public Choice_Begin_Action_1
{
private:
    std::string m_Choice_Newcharacter_Action_2 = "Race ";

public:
    void Action()
    {
        std::cout << m_Choice_Newcharacter_Action_2 << std::endl;
    }
    void  PreviousAction()
    {
        Vector_Choice_Begin();
    }

};
class Choice_Newcharacter_Action_3 : public Choice_Begin_Action_1
{
private:
    std::string m_Choice_Newcharacter_Action_3 = "Class";

public:
    void Action()
    {
        std::cout << m_Choice_Newcharacter_Action_3 << std::endl;
    }
    void  PreviousAction()
    {
        Vector_Choice_Begin();
    }

};
class Choice_Newcharacter_Action_4 : public Choice_Begin_Action_1
{
private:
    std::string m_Choice_Newcharacter_Action_4 = "Compétence ";
public:
    void Action()
    {
        std::cout << m_Choice_Newcharacter_Action_4 << std::endl;
    }
    void  PreviousAction()
    {
        Vector_Choice_Begin();
    }
};


void initalize_Choice(std::vector<Choice_Begin_Action*>& choice)
{

    int idx_place = 0;
    bool boucle = true;
    while (boucle)
    {


        for (int i = 0; i < choice.size(); ++i)
        {
            if (i == idx_place)
            {
                std::cout << "-> ";
            }
            else
            {
                std::cout << "   ";
            }
            choice[i]->Action();
        }

        char key = _getch();
        switch (key)
        {
        case 'Z':
        case 'z':
            if (idx_place > 0)
                --idx_place;
            system("cls");
            break;

        case 'S':
        case 's':
            if (idx_place < choice.size() - 1)
                ++idx_place;
            system("cls");
            break;
        case'E':
        case'e':
            system("cls");
            choice[idx_place]->NextAction();
            boucle = false;
            break;
        case'A':
        case'a':
            system("cls");
            choice[idx_place]->PreviousAction();
            boucle = false;
            break;
        default:
            boucle = false;
            system("cls");
            break;  
        }
       


    }






}
void delete_Vector(std::vector<Choice_Begin_Action*>& choice)
{
    for (auto i = 0; i < choice.size(); ++i)
    {
        delete choice[i];
        choice[i] = nullptr;
    }
    choice.clear();

}
void Vector_Choice_Begin()
{
    std::vector<Choice_Begin_Action* > choice_Begin;
    choice_Begin.push_back(new Choice_Begin_Action_1);
    choice_Begin.push_back(new Choice_Begin_Action_2);
    choice_Begin.push_back(new Choice_Begin_Action_3);
    choice_Begin.push_back(new Choice_Begin_Action_4);
    initalize_Choice(choice_Begin);
    delete_Vector(choice_Begin);



}
void Vector_Choice_NewCharacter()
{
    std::vector<Choice_Begin_Action* > choice_NewCharacter;
    choice_NewCharacter.push_back(new Choice_Newcharacter_Action_1);
    choice_NewCharacter.push_back(new Choice_Newcharacter_Action_2);
    choice_NewCharacter.push_back(new Choice_Newcharacter_Action_3);
    choice_NewCharacter.push_back(new Choice_Newcharacter_Action_4);
    initalize_Choice(choice_NewCharacter);
    delete_Vector(choice_NewCharacter);

}

int main()
{
    Vector_Choice_Begin();

    return 0;

}
