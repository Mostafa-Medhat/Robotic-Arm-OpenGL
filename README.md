### Team Members

| Name                          | Section |  BN |
| ----------------------------- | :-----: | --: |
| Abdelrahman Khaled Isamail    |    1    |  50 |
| Mostafa Medhat Hakim          |    2    |  32 |
| Mohab Hesham Ahmed            |    2    |  34 |
| Hesham Gamal Abdelhady        |    2    |  46 |


# Assignment 1 :computer graphics robotic arm

- the main idea of this assignment was to starting to understand opengl and practice it .

- First of all we started by creating a 3D shape and understand the main operations that can be done to it like(translation , rotation , scaling) and trying to compine all of these to make our robotic arm.

- Then we tried to understand stacks very well as it's very important in opengl, and know when to push matrix and when to pop it inorder to have the result we wanted 

- As opengl uses stacks so the operation are operated by the (LIFO) or last in first out so in order to creat a cube and give its scal and transfer it we used the folowing  

    ```
    glTranslatef(-2.0, 0.0, 0.0); //translate the cube to where we want
    glRotatef((GLfloat)shoulder, 0.0, 0.0, 1.0); // determine the axis onwhich the rotation will hapen 
    glTranslatef(1.0, 0.0, 0.0); //translat the origin of rotation
    glPushMatrix();  //add previous matrises to stack
    glScalef(2.0, 0.6, 1.0); //adjust it's scall
    glutWireCube(1.0); //creat cube
    glPopMatrix();
    ```

But as we don't creat an identity matrix after every drawn cube. as we want to use the operations on the elbow and shoulder in order to make them linked together,this makes the arm dependent on the main parts (shoulder, elbow) and moves with them

# Result Sample:
## Movement of each finger:
<p align="center">
  <img src="https://drive.google.com/uc?export=view&id=1MBOcz4OBVIFhETOEw-D4RiDFWGj8yD0F">
</p>

## Movement of all fingers:
<p align="center">
  <img src="https://drive.google.com/uc?export=view&id=1u4LoKABtcTcJ2sH1fL59W9H3g1OoQYS8">
</p>

# Issues we faced:

when creating the finger we couldn't do the same as the shoulder or the elbow as we want every finger to move seperat not depending on the rotation axes of each other or the elbow 

so the soulution was to wrap evry cube creation with push and pop trying not to transfer unwnted data from finger to another and we do that by the folowing
    
    //finger flang 1
    glPushMatrix();  //to save shoulder and elbow data
    glTranslatef(1.0, 0.25, 0.0);//transfer cube where we want it
    glRotatef((GLfloat)ringFingerBase, 0.0, 0.0, 1.0); // rotation around z axes with angle (ringFingerBase)
    glTranslatef(0.15, 0.0, 0.15); //translat the origin of rotation
    glPushMatrix(); // to save the data of finger flang 1 to use it in the rest of this finger
    glScalef(0.3, 0.1, 0.1); // scaling the cube
    glutWireCube(1.0); //creat the cube
    glPopMatrix(); // get the data of the finger flang 1 to continue ploting on it
    //finger flang 2
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)ringFingerUp, 0.0, 0.0, 1.0);// rotation around z axes with angle (ringFingerUp)
    glTranslatef(0.15, 0.0, 0.0);
    glPushMatrix();// to save the data of finger flang 2 to use it in the rest of this finger
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix();
    //finger flang 3
    glTranslatef(0.15, 0.0, 0.0);
    glRotatef((GLfloat)ringFingerUp, 0.0, 0.0, 1.0);
    glTranslatef(0.15, 0.0, 0.0);
    glScalef(0.3, 0.1, 0.1);
    glutWireCube(1.0);
    glPopMatrix(); // to get the data of the soulder and elbow to use it to creat next finger

and by repeating the previous for the rest of the fingers we have the robotic arm shape now

- To control the angle of rotation we used function called keyboard that takes the litter from user and depending on it it change the angle of specefic finger part which make the user controle it very well

- the keys are used in lower case for opening the finger and upper case for closing it 

- the keys are :
               1. "a,A" for controlling thumb flang 1, and "q,Q" for controlling thumb flang 2,3.
               2. "s,S" for controlling index flang1 , and "w,W" for controlling index flang 2,3.
               3. "d,D" for controlling middle flang 1, and "e,E" for controlling middle flang 2,3.
               4. "f,F" for controlling ring flang 1, and "r,R" for controlling ring flang 2,3.
               5. "g,G" for controlling little flang1, and "t,T" for controlling little flang 2,3.
               6. "h,H" for controlling all fingers at once (opening or closing).
