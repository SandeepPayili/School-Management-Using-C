#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
//admissions Function Declaration
void admissions(  ){
	system("clear");
	system("toilet -F gay Admissions");
	FILE *fp,*fb,*fs;
	printf("		\x1b[1;36m	   +-+-+-+-+-+-+-+-+-+-+-+ +-+-+-+-+\n");
	printf("			   |A|P|P|L|I|C|A|T|I|O|N| |F|O|R|M|\n");
	printf("			   +-+-+-+-+-+-+-+-+-+-+-+ +-+-+-+-+\x1b[0m\n");

	char name[100],dname[100],bname[100],path[100]="student_details/",bpath[100]="bonafides/";
	printf("\n\x1b[1;33m				Enter Full Name:        \x1b[0m");
	scanf(" %[^\n]s",name);
	strcpy(dname,name);
	strcat(path,strcat(name,".txt"));
	fb = fopen(strcat(bpath,name),"w");
	fp = fopen(path,"w");
	fs = fopen("studentslist.txt","a");
	if(fp == NULL  || fb == NULL || fs == NULL){
		printf("Unable to load  file Please! Check it!\n");
		exit(0);				}
	char class[100],fname[100],mname[100],add[100],dob[20];
	char phno[100];
	fprintf(fp,"=========================================================================================\n");
	fprintf(fp,"Name :            %s\n",dname);
	printf("				\x1b[1;33mEnter Class:		\x1b[0m");
        scanf(" %[^\n]",class);
        fprintf(fp,"Class :           %s\n",class);
        printf("				\x1b[1;33mFather's Name:          \x1b[0m");
        scanf(" %[^\n]s",fname);
        fprintf(fp,"Father's Name:    %s\n",fname);
        printf("				\x1b[1;33mMother's Name:          \x1b[0m");
        scanf(" %[^\n]s",mname);
        fprintf(fp,"Mother's Name:    %s\n",mname);
        printf("				\x1b[1;33mDate of Birth:          \x1b[0m");
        scanf(" %[^\n]s",dob); 
	fprintf(fp,"Date of Birth:    %s\n",dob);
        printf("			        \x1b[1;33mGaurdian Phone Number:	\x1b[0m");
        scanf(" %[^\n]s",phno);
        fprintf(fp,"Phone Number:     %s\n",phno);
        printf("		                \x1b[1;33mEnter  Address:      	\x1b[0m");
        scanf(" %[^\n]s",add);
        fprintf(fp,"Address:          %s\n",add);
        fprintf(fp,"=========================================================================================\n");
	printf("\n                  \x1b[1;34m******** Your admission is confirmed, Have a happy learning! *********\x1b[0m\n\n");
        fprintf(fb,"      ***************************** Student Bonafied Cerficate ***************************************\n");
	fprintf(fb,"          	This is Certify that Mr/Mrs \x1b[4m %s \x1b[0m   S.o/D.o  Sri \x1b[4m%s\x1b[0m is/was Bonafied Student of	\n",dname,fname);
	fprintf(fb,"	      this institue who is studying/studied \x1b[4m%s\x1b[0m. His/Her conduct in this institution during	\n",class);
	fprintf(fb,"	      the course is/was Satisfactory/Unsatisfactory.His/Her date of birth as per our records \x1b[4m%s\x1b[0m.	 \n",dob);
	fprintf(fb,"											sd/-\n");
	fprintf(fb,"										      Director\n");
	fprintf(fs,"\n%s",dname);
	fclose(fp);fclose(fb);fclose(fs);
	char mn;
	printf("Enter Any Key to Continue ->.................   ");
	scanf(" %[^\n]s",&mn);
}
// Bonafied FUNCTION
void printbonafied(){
	system("clear");
	system("figlet -f slant Bonafied");
	char name[100],check[100];
	printf("\n Enter Name of the Candidate:");
	scanf(" %[^\n]s",name);
			char path[100]="bonafides/";
			strcat(name,".txt");
			strcat(path,name);
			FILE *fp;
			fp = fopen(path,"r");
			if(fp == NULL){
		 		printf("Student doesnot belongs to our School\n");
				 	}
			else{
				char c;
				while((c=fgetc(fp))!=EOF){
					printf("%c",c);}
				
			printf("\n");
			fclose(fp); 
			}
	char mn;
	printf("Enter Any Key to Continue ->.................   ");
	scanf(" %[^\n]s",&mn);
}
//ACADEMICS FUNCTION
void printgradesheet(){
	system("clear");
	system("toilet -F gay Grade Sheet");
	char name[100],check[100];
	printf("\n\n Enter Name of the Candidate:");
	scanf(" %[^\n]s",name);

	char path[100]="marks_memo/";//newer
		strcat(name,".txt");
		strcat(path,name);
		FILE *sw;
		sw = fopen(path,"r");
		if( sw == NULL){
			printf("Student marks not uploaded\n\n");
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn); 
			}
		else{
		char sd;
		while((sd=fgetc(sw))!=EOF)
			printf("%c",sd);
		printf("\n");
		fclose(sw); 
		char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);}
}


void academics(){  
  system("clear");
	system("figlet -f slant Academics");
  printf("\x1b[7;39m");
  printf("		+-+-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+\n");
  printf("		|A|C|A|D|E|M|I|C|S| |S|E|C|T|I|O|N|\n");
  printf("		+-+-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+\n");
  printf("\x1b[0m");
 // printf("\n==========================   Welcome to Academics Section  ======================================\n");
  printf("  1.Bonafied\n  2.Grade sheet\n");
  int x;
  printf("\n Enter Your Choice:");
  scanf(" %d",&x);
  if(x==1)
          printbonafied();
  else if(x==2)
          printgradesheet();
  else{
	  char mn;
  	  printf("Please! Enter Valid Input!\n\n");
			printf("Enter Any Key to Continue ->.................   ");
	char ex;
	scanf(" %[^\n]s",&ex);
	scanf(" %[^\n]s",&mn); }
}

void feestructure()
{
	char ch;
	int n;
	system("clear");
	system("toilet  Fee Section");
	printf("\n*******************  Welcome to Fee Structure Section ********************\n");
	printf(" 01.Nursary \n");
	printf(" 02.LKG \n");
	printf(" 03.UKG \n");
	printf(" 04.1st class \n");
	printf(" 05.2nd Class \n");
	printf(" 06.3rd class \n");
	printf(" 07.4th class \n");
 	printf(" 08.5th class \n");
 	printf(" 09.6th class \n");
	printf(" 10.7th class \n");
	printf(" 11.8th class \n");
	printf(" 12.9th class \n");
	printf(" 13.10th class\n");
    printf("\nEnter your choice to know respected fee Structure : ");
	if(!scanf(" %d",&n)){
		char test[10];
		scanf(" %[^\n]s",&test);
	};

 		printf("\n");
		FILE *f1;
		if(n==1)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for Nursery -------------------\n");
			f1=fopen("fee_structure/nursary.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else if(n==2)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for  LKG-------------------\n");
			f1=fopen("fee_structure/lkg.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else if(n==3)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for UKG -------------------\n");
			f1=fopen("fee_structure/ukg.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else if(n==4)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for 1st Class -------------------\n");
			f1=fopen("fee_structure/1.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
			char mn;
				printf("Enter Any Key to Continue ->.................   ");
				scanf(" %[^\n]s",&mn);
		}
		else if(n==5)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for 2nd Class -------------------\n");
			f1=fopen("fee_structure/2.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else if(n==6)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for 3rd Class -------------------\n");
			f1=fopen("fee_structure/3.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else if(n==7)
		{system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for 4th Class -------------------\n");
			f1=fopen("fee_structure/4.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
				char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else if(n==8)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for 5th Class -------------------\n");
			f1=fopen("fee_structure/5.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else if(n==9)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for 6th Class -------------------\n");
			f1=fopen("fee_structure/6.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
				char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else if(n==10)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for 7th Class -------------------\n");
			f1=fopen("fee_structure/7.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
						char mn;
				printf("Enter Any Key to Continue ->.................   ");
				scanf(" %[^\n]s",&mn);
		}
		else if(n==11)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for 8th Class -------------------\n");
			f1=fopen("fee_structure/8.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
				char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else if(n==12)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for 9th Class -------------------\n");
			f1=fopen("fee_structure/9.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
					char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else if(n==13)
		{	system("clear");
			system("toilet  Fee Section");
			printf("\n -------------------- Fee Details for 10th Class -------------------\n");
			f1=fopen("fee_structure/10.txt","r");
			ch=fgetc(f1);
			while(ch!=EOF){
				printf("%c",ch);
				ch=fgetc(f1);}
			fclose(f1);
					char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		}
		else{
		system("clear");
		system("toilet -F gay OOPS!");
		printf("Invalid Entry! Come back again\n");
		char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);}
	
}

void studentdetails(){
	system("clear");
	system("figlet -f slant Student Details");
	printf("*************** Know the student Details *******************\n");
	printf("\nEnter name of the student:");
	char name[30],path[50]="student_details/";
	scanf(" %[^\n]s",name);
	strcat(name,".txt");
	strcat(path,name);
	FILE *ms;
	ms=fopen(path,"r");
	if(ms == NULL){
		printf("Student is not Belongs to our School\n");
	}
	else{
		char c;
		while((c=fgetc(ms))!=EOF)
			printf("%c",c);	
		fclose(ms); }
	char mn;
			printf("\nEnter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
}

void facultydetails(){
   int x;
	system("clear");
	system("figlet -f slant Faculty Details");
   printf("\n1.Computer Science\n2.Mathematics\n3.Science\n4.Social\n5.Telugu\n6.English\n");
   printf("\nPlease Enter Your Choice : ");
   if(!scanf(" %d",&x)){
	   char test[10];
	   scanf(" %[^\n]s",&test);
   };
   if(x==1){
     		  FILE *fl ; 
       		  char ch;
		system("clear");
		system("figlet -f slant Computer Science");
		printf("******* Faculty Details of Computer Science ****************************\n");
		char new[100]="facultydept/cse/list.txt" ;
		fl = fopen(new,"r");
		if(fl == NULL ){
 			printf("Unable to open CSE faculty list File\n");
			exit(1); }
		while(1){
			char name[100]="",p1[100]="facultydept/cse/";
			fscanf(fl,"%[^\n]s",name);
			fseek(fl,1,SEEK_CUR);
			strcat(name,".txt");
			strcat(p1,name);
			FILE *s;
			s = fopen(p1,"r");
			if(s==NULL){
				//printf("Unable to open %s faculty file\n",name);
				break;
			}
			char p;
			while((p=fgetc(s))!=EOF)
				printf("%c",p);
			printf("\n");
			fclose(s);			
			if(feof(fl))
					break;
			}
  		fclose(fl);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
}
   else if(x==2){
		FILE *fl ; 
       		  char ch;
		system("clear");
		system("toilet -F gay Mathematics");
		printf("******* Faculty Details of Mathematics ****************************\n");
		char new[100]="facultydept/mathematics/list.txt" ;
		fl = fopen(new,"r");
		if(fl == NULL ){
 			printf("Unable to open Mathematics faculty list File\n");
			exit(1); }
		while(1){
			char name[100]="",p1[100]="facultydept/mathematics/";
			fscanf(fl,"%[^\n]s",name);
			fseek(fl,1,SEEK_CUR);
			strcat(name,".txt");
			strcat(p1,name); 
			FILE *s;
			s = fopen(p1,"r");
			if(s==NULL){
				//printf("Unable to open faculty file\n");
				break;
			}
			char p;
			while((p=fgetc(s))!=EOF)
				printf("%c",p);
			printf("\n");
			fclose(s);			
			if(feof(fl))
					break;
			}
  		fclose(fl);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
}
   else if(x==3){
		FILE *fl ; 
       		  char ch;
		system("clear");
		system("figlet -f slant  Science");
		printf("******* Faculty Details of science ****************************\n");
		char new[100]="facultydept/science/list.txt" ;
		fl = fopen(new,"r");
		if(fl == NULL ){
 			printf("Unable to open Science faculty list File\n");
			exit(1); }
		while(1){
			char name[100]="",p1[100]="facultydept/science/";
			fscanf(fl,"%[^\n]s",name);
			fseek(fl,1,SEEK_CUR);
			strcat(name,".txt");
			strcat(p1,name); 
			FILE *s;
			s = fopen(p1,"r");
			if(s==NULL){
				//printf("Unable to open faculty file\n");
				break;
			}
			char p;
			while((p=fgetc(s))!=EOF)
				printf("%c",p);
			printf("\n");
			fclose(s);			
			if(feof(fl))
					break;
			}
  		fclose(fl);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
}
   else if(x==4){
		FILE *fl ; 
       		  char ch;
		system("clear");
		system("figlet -f bubble social");
		printf("******* Faculty Details of social ****************************\n");
		char new[100]="facultydept/social/list.txt" ;
		fl = fopen(new,"r");
		if(fl == NULL ){
 		printf("Unable to open Social faculty list File\n");
			exit(1); }
		while(1){
			char name[100]="",p1[100]="facultydept/social/";
			fscanf(fl,"%[^\n]s",name);
			fseek(fl,1,SEEK_CUR);
			strcat(name,".txt");
			strcat(p1,name); 
			FILE *s;
			s = fopen(p1,"r");
			if(s==NULL){
				//printf("Unable to open faculty file\n");
				break;
			}
			char p;
			while((p=fgetc(s))!=EOF)
				printf("%c",p);
			printf("\n");
			fclose(s);			
			if(feof(fl))
					break;
			}
  		fclose(fl);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
}
   else if(x==5){
			FILE *fl ; 
       		  char ch;
		system("clear");
		system("figlet -f slant Telugu");
		printf("******* Faculty Details of telugu ****************************\n");
		char new[100]="facultydept/telugu/list.txt" ;
		fl = fopen(new,"r");
		if(fl == NULL ){
 			printf("Unable to open Telugu faculty list File\n");
			exit(1); }
		while(1){
			char name[100]="",p1[100]="facultydept/telugu/";
			fscanf(fl,"%[^\n]s",name);
			fseek(fl,1,SEEK_CUR);
			strcat(name,".txt");
			strcat(p1,name); 
			FILE *s;
			s = fopen(p1,"r");
			if(s==NULL){
				//printf("Unable to open faculty file\n");
				break;
			}
			char p;
			while((p=fgetc(s))!=EOF)
				printf("%c",p);
			printf("\n");
			fclose(s);			
			if(feof(fl))
					break;
			}
  		fclose(fl);
		char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
}
   else if(x==6){
			FILE *fl ; 
       		  char ch;
		system("clear");
		system("toilet -F gay English");
		printf("******* Faculty Details of english ****************************\n");
		char new[100]="facultydept/english/list.txt" ;
		fl = fopen(new,"r");
		if(fl == NULL ){
 			printf("Unable to open English faculty list File\n");
			exit(1); }
		while(1){
			char name[100]="",p1[100]="facultydept/english/";
			fscanf(fl,"%[^\n]s",name);
			fseek(fl,1,SEEK_CUR);
			strcat(name,".txt");
			strcat(p1,name); 
			FILE *s;
			s = fopen(p1,"r");
			if(s==NULL){
				//printf("Unable to open faculty file\n");
				break;
			}
			char p;
			while((p=fgetc(s))!=EOF)
				printf("%c",p);
			printf("\n");
			fclose(s);			
			if(feof(fl))
					break;
			}
  		fclose(fl);
			char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
}
  else {
	system("clear");
	system("toilet -F gay Oops! ");
        printf("\n Invalid Entry! Come Back Again!\n");
	char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
	} 
}


void edit_student_details(){
		system("clear");
		system("figlet -f slant Edit Student data");
		char name[100], dname[100],path[100]="student_details/";
		printf("\nEnter Name of Student to edit:");
		scanf(" %[^\n]s",name);
		strcpy(dname,name);
		strcat(name,".txt");
		strcat(path,name);
		FILE *ch;
		ch = fopen(path,"r");
		if(ch == NULL ){
			printf("Given Student is not Our School to edit\n\n");
		}
		else {
			fclose(ch);
			FILE *filename;
			filename=fopen(path,"w");
			char cls[100],fath[30],moth[30],add[30],ph[100];
			printf("Enter class:");
			scanf(" %[^\n]s",cls);
			printf("Enter father name:");
			scanf(" %[^\n]s",fath);
			printf("Enter Mother name:");
			scanf(" %[^\n]s",moth);
			printf("Enter Phone number:");
			scanf(" %[^\n]s",ph);
			printf("Enter Address:");
			scanf(" %[^\n]s",add);
			fprintf(filename,"===========================================================\n");
			fprintf(filename,"Name :               %s\n",dname);
			fprintf(filename,"Class :              %s\n",cls);
			fprintf(filename,"Father's  Name:      %s\n",fath);
			fprintf(filename,"Mother's  Name:      %s\n",moth);
			fprintf(filename,"Phone Number:        %s\n",ph);
			fprintf(filename,"Address:             %s\n",add);
			fprintf(filename,"===========================================================\n");
			fclose(filename);
			system("figlet -f small Updated sucessfully");
	                printf("\nGiven Details Updated Sucessfully, Have a Great Day!\n\n");
				
		}	
}
void edit_faculty_details(){
			system("clear");
			system("figlet -f slant Edit Faculty data");
		    char name[30];char dname[100];
			printf("\nEnter Faculty Name to edit:");
			scanf(" %[^\n]s",name);
			strcpy(dname,name);
			char dept[100],dept_path[100] = "facultydept/";
			printf("\nEnter your department >>>> \n(cse,english,mathematics,science,social,telugu) :  ");
			scanf(" %[^\n]s",&dept);

			for(int i=0;i<dept[i] != '\0' ; i++){
				if(dept[i] >= 65 &&  dept[i] <= 90  ){
				dept[i] += 32;
				}
			}

			if( !strcmp(dept,"cse") || !strcmp(dept,"english") || !strcmp(dept,"mathematics") || !strcmp(dept,"science") || !strcmp(dept,"social") || !strcmp(dept,"telugu") ){
				strcat(dept_path,dept);
				strcat(dept_path,"/");
				strcat(dept_path,name);
				strcat(dept_path,".txt");
				FILE *ch;
				ch = fopen(dept_path,"r");
				if(ch == NULL ){
					printf("\nGiven Faculty is not belongs to Our School to edit\n");
				}
				else{
					fclose(ch);
					FILE  *dept_file;
					dept_file = fopen(dept_path,"w");
					char qual[30],exp[30],ph[30],sname[100];
					printf("\n ::::::::::::::::::::   Please enter new correct Details Now   :::::::::::::::::::::::::: \n\n");
					printf("\nEnter Qualification:");
					scanf(" %[^\n]s",qual);
					printf("\nEnter your Experience:");
					scanf(" %[^\n]s",exp);
					printf("\nEnter your phone number:");
					scanf(" %[^\n]s",ph);
					fprintf(dept_file,"===================================================================================\n");
					fprintf(dept_file,"Name             :      %s\n",dname);
					fprintf(dept_file,"Qualification    :      %s\n",qual);
					fprintf(dept_file,"Experience       :      %s\n",exp);
					fprintf(dept_file,"Mobile No.       :      %s\n",ph);
					fprintf(dept_file,"====================================================================================\n");
					system("clear");
					system("figlet -f mini Updated Successfully");
					printf("\nGiven Details Updated Sucessfully, Have a Great Day!\n");
					fclose(dept_file);
					}
			}else{
					system("clear");
					system("toilet OOPS!");
	    			printf("\n\nInvalid Input!  Please enter Valid Department\n");
			}
}
void editdetails(){
	system("clear");
	system("toilet -F metal  Edit!");
    printf("\n **************** Edit Your Details *******************		\n");
	printf("1.Student\n2.Faculty\n");
	int n;
	printf("\nEnter your choice:");
	if(!scanf(" %d",&n)){
		char test[10];
		scanf(" %[^\n]s",&test);
	};
	if(n==1){
		edit_student_details();
		char mn;
		printf("\nEnter Any Key to Continue ->.................   ");
		scanf(" %[^\n]s",&mn);
	}
	else if(n==2){
		edit_faculty_details();			
		char mn;
		printf("\nEnter Any Key to Continue ->.................   ");
		scanf(" %[^\n]s",&mn);
	}
	else{
			system("clear");
			system("toilet OOPS!");
		    printf("Invalid Input!\n");
			char mn;
			printf("\nEnter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
	}
 }  
void addfaculty(){
	system("clear");
	system("toilet -F gay Add Faculty");
	char name[30],dp[30],dept[30],depath[150]="facultydept/",dumm[100];
	char qual[30],exp[30],ph[30];
	FILE *fl;
	printf("\nEnter new Faculty name:");
	scanf(" %[^\n]s",name);
	strcpy(dp,name);
	strcat(name,".txt");
	printf("\nEnter new Faculty department >> \n(cse,english,mathematics,science,social,telugu) :  ");
	scanf(" %[^\n]s",dept);

	for(int i=0;i<dept[i] != '\0' ; i++){
				if(dept[i] >= 65 &&  dept[i] <= 90  ){
				dept[i] += 32;
				}
			}

	if( !(!strcmp(dept,"cse") || !strcmp(dept,"english") || !strcmp(dept,"mathematics") || !strcmp(dept,"science") || !strcmp(dept,"social") || !strcmp(dept,"telugu") ) ){
			system("clear");
			system("toilet OOPS!");
	    	printf("\n\nInvalid Input!  Please enter Valid Department\n");
	}else{
			strcat(dept,"/");
			strcat(depath,dept);
			strcpy(dumm,depath);
			strcat(dumm,"list.txt");
			strcat(depath,name);
			FILE *fd;
			fd = fopen(depath,"w");
			fl=fopen(dumm,"a");
			fputs(dp,fl);
			fprintf(fl,"\n");
			printf("\nEnter your Qualifiaction:");
			scanf(" %[^\n]s",qual);
			printf("\nEnter your experience:");
			scanf(" %[^\n]s",exp);
			printf("\nEnter your mobile number:");
			scanf(" %[^\n]s",ph);
			fprintf(fd,"==========================================================\n");
			fprintf(fd,"Name:			%s\n",dp);
			fprintf(fd,"Qualification:		%s\n",qual);
			fprintf(fd,"Experience:		%s\n",exp);
			fprintf(fd,"Phone number:		%s\n",ph);
			fprintf(fd,"===========================================================\n");
			system("figlet  -f mini Faculty Added!");
		    printf("Faculty  Added Successfully\n");
			fclose(fl);fclose(fd);
	}
    char mn;
	printf("Enter Any Key to Continue ->.................   ");
	scanf(" %[^\n]s",&mn); 
}

void error_marks_upload(){
	system("toilet -F gay OOPS!");
	printf("\nOnly Numeric Values are Accepted!\n");
	char test[10];
	scanf(" %[^\n]s",&test);
	char mn;
	printf("\nExiting Please Come Back With Correct Format .................   \n\n");
	exit(0);
}


void uploadmarks(){
	system("clear");
	system("figlet -f slant Upload Marks!");
	char name[30],path[100]="marks_memo/",spath[100]="student_details/";
	printf("Enter Candidate Name:");
	scanf(" %[^\n]s",name);
	strcat(name,".txt");
	FILE *ml;
	FILE *sl;  
	sl=fopen(strcat(spath,name),"r");
	
	if(sl==NULL ){
		system("toilet -F gay OOPS!	");
		printf("Student not exit to upload marks\n\n");
		char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
		 }
	else{
		ml=fopen(strcat(path,name),"w");
		char c;
		while((c=fgetc(sl))!=EOF){
			fputc(c,ml);
	}
	fclose(ml);
	ml=fopen(path,"a");
	float mt1,mt2,mt3,sem1,sem2;
	printf("\n Enter MT-1 marks:");
	if(!scanf("%f",&mt1)){
		error_marks_upload();	
	};
	printf("\n Enter MT-2 marks:");
	if(!scanf("%f",&mt2)){
		error_marks_upload();
	};
	printf("\n Enter MT-3 marks:");
	if(!scanf("%f",&mt3)){
		error_marks_upload();
	};
	printf("\n Enter SEM-1 marks:");
	if(!scanf("%f",&sem1)){
		error_marks_upload();
	};
	printf("\n Enter SEM-2 marks:");
	if(!scanf("%f",&sem2)){
		error_marks_upload();
	};
	
	fprintf(ml,"                    GRADE SHEET                               \n");
	fprintf(ml,"-------------------------------------------------------------\n");
	fprintf(ml,"	Exam          MArks		Grade  \n");
	fprintf(ml,"-------------------------------------------------------------\n");
	fprintf(ml,"	MT-1		%.2f		 %.2f	\n",mt1,mt1/10);
	fprintf(ml,"	MT-2		%.2f		 %.2f	\n",mt2,mt2/10);
	fprintf(ml,"	MT-3		%.2f		 %.2f	\n",mt3,mt3/10);
	fprintf(ml,"	SEM-1		%.2f		 %.2f	\n",sem1,sem1/10);
	fprintf(ml,"	SEM-2		%.2f		 %.2f	\n",sem2,sem2/10);
	fprintf(ml,"------------------------------------------------------------\n");
	fclose(ml); 
	system("toilet -F gay Uploaded");
	printf("Marks Uploaded Successfully!\n");
	char mn;
			printf("Enter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn); }
}
void aboutus(){
	system("clear");
		system("toilet -F gay About Us!");
   FILE *fp;
	fp=fopen("about.txt","r");
	char c;
	while((c=fgetc(fp))!=EOF)
		printf("%c",c);
	fclose(fp);
	char mn;
			printf("\nEnter Any Key to Continue ->.................   ");
			scanf(" %[^\n]s",&mn);
}

void visitus(){
   system("clear");
   system("toilet -F metal  website!");
   system("figlet -f slant Please Wait!");
  printf("\n\n*************** opening our website ***********************\n");
  system("firefox website/school.html");
  //system("google-chrome website/school.html");
  system("clear");
  system("toilet -F metal  website!");
  system("figlet -f slant Hope you have Enjoyed our site!...");
  sleep(2);
  system("clear");
	system("figlet Exiting Please Wait..................");
	sleep(1);
	system("clear");
	system("figlet -f slant Hope you will come back soon!... ");
  exit(1);
}

int exit_my_school(){
	system("clear");
	system("figlet Exiting Please Wait..................");
	sleep(1);
	system("clear");
	system("figlet -f slant Hope you will come back soon!... ");
	return 0;
}


int main(){
// clear screen
system("clear");
//creating Welcome 
printf("\x1b[5;33m				┌─────────────────────────────────────────────────┐ \n");
printf("				│                                                 │ \n");
printf("				│m     m mmmmmm m        mmm   mmmm  m    m mmmmmm│ \n");
printf("				│#  #  # #      #      m\"   \" m\"  \"m ##  ## #     │ \n");
printf("				│\" #\"# # #mmmmm #      #      #    # # ## # #mmmmm│ \n");
printf("				│ ## ##\" #      #      #      #    # # \"\" # #     │ \n");
printf("				│ #   #  #mmmmm #mmmmm  \"mmm\"  #mm#  #    # #mmmmm│ \n");
printf("				│                                                 │ \n");
printf("				│                                                 │ \n");
printf("				└─────────────────────────────────────────────────┘ \n\x1b[0m");sleep(1);
//creating School WElcome
printf("		****************************************************************************************\n");
printf("               **                  \x1b[7mWelcome to School Management Project\x1b[0m                                ** \n");
printf("              ** 	\x1b[1;33m+-+-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+-+\x1b[0m                   ** \n");
printf("	     **	\x1b[1;33m	| R A M A N U J A N  S C H O O L   O F  E X C E L L E N C E |\x1b[0m                    **\n"); 
printf("              **\x1b[1;33m	+-+-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+ +-+-+ +-+-+-+-+-+-+-+-+-+-+ \x1b[0m                  **\n");
printf("               ** 	                     \x1b[3m- Come fall in love with learning\x1b[0m                         **\n");
printf("		****************************************************************************************\n\n");sleep(1);


//fliglet
printf("\x1b[5m");
  
  printf("	               ____      _    __  __    _    _   _ _   _     _   _    _   _\n");
  printf("	              |  _ \\    / \\  |  \\/  |  / \\  | \\ | | | | |   | | / \\  | \\ | |\n");
  printf("	              | |_) |  / _ \\ | |\\/| | / _ \\ |  \\| | | | |_  | |/ _ \\ |  \\| |\n");
  printf("	              |  _ <  / ___ \\| |  | |/ ___ \\| |\\  | |_| | |_| / ___ \\| |\\  |\n");
  printf("	              |_| \\_\\/_/   \\_\\_|  |_/_/   \\_\\_| \\_|\\___/ \\___/_/   \\_\\_| \\_|\n");
  printf("\x1b[0m");
//motto
printf("\n                             \x1b[7;36m- The goal of education should be to activate the child’s own natural desire to learn.........\x1b[0m\n\n");sleep(1);
printf("==============================================================================================================================================\n");
//list of FUNCTIONS
printf("  \x1b[4;33mOur Services\x1b[0m : \n");
printf("    \x1b[1;32m1.Admissions\n    ");
printf("\x1b[1;33m2.Academics\n    ");
printf("\x1b[1;34m3.Fee Structure\n    ");
printf("\x1b[1;35m4.Student Details\n    ");
printf("\x1b[1;36m5.Faculty Details\n    ");
printf("\x1b[2;32m6.Edit Details\n    ");
printf("\x1b[1;31m7.Faculty Recruitment\n    ");
printf("\x1b[2;37m8.Upload Student Marks\n    ");
printf("\x1b[2;33m9.About us\n    ");
printf("\x1b[0;31m10.Visit us\n    ");
printf("\x1b[1;32m11.Exit\n");
  printf("\x1b[0m");

//taking user input
int n;
 printf("Please Enter Your Request(1-11)-> ..............    ");
 if(!scanf("%d",&n)){
	 printf("Sorry invalid Request!.....\n");
	 return 0;
 };
 if( n == 11 ){
	 exit_my_school();
 };
 while(n!=11){
	if(n==1)
		admissions();
	else if(n==2)
		academics();
	else if(n==3)
		feestructure();
	else if(n==4)
		studentdetails();
	else if(n==5)
		facultydetails();
	else if(n==6)
		editdetails();
	else if(n==7)
		addfaculty();
	else if(n==8)
		uploadmarks();
	else if(n==9)
		aboutus();
	else if(n==10)
		visitus();
	system("clear");
	printf("\x1b[5m");
  
	  printf("	               ____      _    __  __    _    _   _ _   _     _   _    _   _\n");
	  printf("	              |  _ \\    / \\  |  \\/  |  / \\  | \\ | | | | |   | | / \\  | \\ | |\n");
	  printf("	              | |_) |  / _ \\ | |\\/| | / _ \\ |  \\| | | | |_  | |/ _ \\ |  \\| |\n");
	  printf("	              |  _ <  / ___ \\| |  | |/ ___ \\| |\\  | |_| | |_| / ___ \\| |\\  |\n");
	  printf("	              |_| \\_\\/_/   \\_\\_|  |_/_/   \\_\\_| \\_|\\___/ \\___/_/   \\_\\_| \\_|\n");
	  printf("\x1b[0m");
	//motto
	printf("\n                             \x1b[7;36m- The goal of education should be to activate the child’s own natural desire to learn.........\x1b[0m\n\n");
	printf("==============================================================================================================================================\n");
	//list of FUNCTIONS
	printf("  \x1b[4;33mOur Services\x1b[0m : \n");
	printf("    \x1b[1;32m1.Admissions\n    ");
	printf("\x1b[1;33m2.Academics\n    ");
	printf("\x1b[1;34m3.Fee Structure\n    ");
	printf("\x1b[1;35m4.Student Details\n    ");
	printf("\x1b[1;36m5.Faculty Details\n    ");
	printf("\x1b[2;32m6.Edit Details\n    ");
	printf("\x1b[1;31m7.Faculty Recruitment\n    ");
	printf("\x1b[2;37m8.Upload Student Marks\n    ");
	printf("\x1b[2;33m9.About us\n    ");
	printf("\x1b[0;31m10.Visit us\n    ");
	printf("\x1b[1;32m11.Exit\n");
	  printf("\x1b[0m");
	
	printf("Please Enter Your Request(1-11)-> ..............  ");
	if(!scanf("%d",&n)){
		printf("Sorry invalid Request!.....\n");
	 	return 0;
	};
	if( n == 11 ){
	 exit_my_school();
 	};
	}
return 0;
}
