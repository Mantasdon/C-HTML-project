///C to HTML project done by VU CS 1 course student: Mantas D.
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DOCTYPE "<!DOCTYPE html>\n"
#define BEGIN_HTML "<html>\n"
#define END_HTML "</html>\n"
#define BEGIN_HEAD "<head>\n"
#define END_HEAD "</head>\n"
#define BEGIN_TITLE "<title>"
#define END_TITLE "</title>\n"
#define BEGIN_BODY "<body>\n"
#define END_BODY "</body>\n"
#define BEGIN_PARAGRAPH "<p>"
#define END_PARAGRAPH "</p>\n"
#define BEGIN_UNORDERED_LIST "<ul>\n"
#define END_UNORDERED_LIST "</ul>\n"
#define BEGIN_ORDERED_LIST "<ol>\n"
#define END_ORDERED_LIST "</ol>\n"
#define BEGIN_LIST_ITEM "<li>\n"
#define END_LIST_ITEM "</li>\n"
#define BEGIN_STYLE "<style>\n"
#define END_STYLE "</style>\n"
#define BEGIN_BACKGROUND "<body style=\"background-color:"
#define END_BACKGROUND ">\n"
#define BEGIN_MARK_STYLE "mark {\n"
#define END_MARK_STYLE "}\n"
#define YUMMY_HTML "Yummy Yummy recipe.html"
#define BEGIN_H2_STYLE "h2{\n"
#define END_H2_STYLE "}\n"
#define BEGIN_H2 "<h2>"
#define END_H2 "</h2>\n"
#define END_DIV "</div>\n"
#define BEGIN_MARK "<mark>"
#define END_MARK "</mark>\n"
#define NEW_LINE "\n"
#define BEGIN_PARAGRAPH_STYLE "p{\n"
#define END_PARAGRAPH_STYLE "}\n"
FILE *fp;

char *get_input(char *input_length); /// first argument is a STRING of the the desired size !!!MAKE SURE TO SEND A STRING!!!
void initiate();
void background();
void print_name();
void print_surname();
void print_username();
void print_email();
void print_datebirth();
void print_date();





int main(){
/// Beginning
    fp = fopen(YUMMY_HTML, "w+");
    initiate();
   // background();


/// Ending
    fclose(fp);
    return 0;
}

char *get_input(char *input_length){

    char scanf_arg[8] = "%", newline_flag;
    strcat(scanf_arg, input_length);
    strcat(scanf_arg, "s%c");


    int input_variable = atoi(input_length);
//    printf("%d\n",input_variable);

    char *input = calloc(input_variable, sizeof(char));
 //   printf("%s\n",scanf_arg);

    while(1){
        if((scanf(scanf_arg, input, &newline_flag)) == 2 && newline_flag == '\n')
            break;
        else printf("You exceeded the character limit. Please try again.\n");
        while(getchar() != '\n');
    }
//    printf("%s\n",input);
    return input;
}

void initiate(){
    fputs(DOCTYPE, fp);
    fputs(BEGIN_HTML, fp);
    fputs(BEGIN_HEAD, fp);
    fputs(BEGIN_TITLE, fp);
    fputs("the green profile", fp);
    fputs(END_TITLE, fp);
    fputs(NEW_LINE, fp);
    fputs(BEGIN_STYLE, fp);
    fputs(BEGIN_MARK_STYLE,fp);
    fputs("background-color: HoneyDew;\n",fp);
    fputs("color: #9ACD32;\n", fp);
    fputs("font-family: courier;\n", fp);
    fputs("font-size: 210%;\n", fp);
    fputs(END_MARK_STYLE, fp);
    fputs(END_STYLE, fp);
    fputs(NEW_LINE, fp);
    fputs(BEGIN_MARK, fp);
    fputs("~The Green Profile~",fp);
    fputs(END_MARK, fp);
    fputs(NEW_LINE, fp);
    fputs(BEGIN_STYLE, fp);
    fputs(BEGIN_PARAGRAPH_STYLE, fp);
    fputs("color: #228B22;\nfont-size: 130%;\nfont-family: calibri;\n",fp);
    fputs(END_PARAGRAPH_STYLE, fp);
    fputs(BEGIN_H2_STYLE, fp);
    fputs("color: #228B22;\nfont-family: calibri;\nborder: 5px solid #228B22;\npadding: 20px;\nbackground-color: #F0FFF0;\n",fp);
    fputs(END_H2_STYLE,fp);
    fputs(END_STYLE, fp);
    fputs(END_HEAD,fp);
    fputs(NEW_LINE, fp);
    fputs("<body style=\"background-image: url('cover.jpg');background-repeat: no-repeat;background-attachment: fixed;background-size: cover\">\n",fp);
    fputs(NEW_LINE, fp);
    fputs(BEGIN_H2,fp);
    fputs("Wellcome to The Green Profile. Here you will see your profile information.",fp);
    fputs(END_H2, fp);
    fputs(NEW_LINE, fp);
    fputs("<div style=\"background-color:#8FBC8F;color:#228B22;padding:10px;\">\n",fp);
    fputs("<p style=\"font-size:130%;fornt-family:calibri;\">\n",fp);
    fputs("<img src=\"profile_picture.jpg\" alt=\"Profile picture\" style=\"float:right; width:200px;height:200px;\">\n",fp);
    print_name();
    fputs(END_PARAGRAPH,fp);
    print_surname();
    print_username();
    print_email();
    print_datebirth();
    print_date();
    fputs(END_DIV, fp);
    fputs(NEW_LINE, fp);
    fputs(END_BODY, fp);
    fputs(END_HTML, fp);



}

/*void background(){

    printf("giv background");
    fputs(BEGIN_BACKGROUND, fp);
    fputs(get_input("500"), fp);
    fputs(END_BACKGROUND, fp);
    char *input[50];
    scanf("%6d", input);
    fprintf(fp, "%s%s%s", BEGIN_BACKGROUND, get_input("500"), END_BACKGROUND)*/


void print_name(){
    printf("ENTER NAME\n");
    fputs("NAME:",fp);
    fputs(get_input("10"), fp);
    fputs("\n",fp);


}
void print_surname(){
    fputs(BEGIN_PARAGRAPH,fp);
    printf("ENTER SURNAME\n");
    fputs("SURNAME:",fp);
    fputs(get_input("10"), fp);
    fputs(END_PARAGRAPH,fp);


}
void print_username(){
    fputs(BEGIN_PARAGRAPH,fp);
    printf("ENTER USERNAME\n");
    fputs("USERNAME",fp);
    fputs(get_input("10"), fp);
    fputs(END_PARAGRAPH,fp);


}
void print_email(){
    fputs(BEGIN_PARAGRAPH,fp);
    printf("ENTER EMAIL\n");
    fputs("EMAIL:",fp);
    fputs(get_input("100"), fp);
    fputs(END_PARAGRAPH,fp);


}
void print_datebirth(){
    fputs(BEGIN_PARAGRAPH,fp);
    printf("ENTER BIRTHDATE\n");
    fputs("BIRTHDATE:",fp);
    fputs(get_input("100"), fp);
    fputs(END_PARAGRAPH,fp);


}
void print_date(){
    fputs(BEGIN_PARAGRAPH,fp);
    printf("ENTER DATE\n");
    fputs("DATE",fp);
    fputs(get_input("15"), fp);
    fputs(END_PARAGRAPH,fp);


}
