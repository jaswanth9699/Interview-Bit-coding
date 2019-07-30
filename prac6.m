img1=imread('sig1.jpg');
a=imresize(img1,[3 3],'bilinear');
subplot(3,4,1),imshow(img1);
subplot(3,4,2),imshow(a);
img2=imread('sig2.jpg');
b=imresize(img2,[3 3],'bilinear');
subplot(3,4,3),imshow(img2);
subplot(3,4,4),imshow(b);
img3=imread('sig3.jpg');
c=imresize(img3,[3 3],'bilinear');
subplot(3,4,5),imshow(img3);
subplot(3,4,6),imshow(c);
img4=imread('sig4.jpg');
d=imresize(img4,[3 3],'bilinear');
subplot(3,4,7),imshow(img4);
subplot(3,4,8),imshow(d);
img5=imread('sig5.jpg');
e=imresize(img5,[3 3],'bilinear');
subplot(3,4,9),imshow(img5);
subplot(3,4,10),imshow(e);
img6=imread('sig6.jpg');
f=imresize(img6,[3 3],'biliear');
subplot(3,4,11),imshow(img6);
subplot(3,4,12),imshow(f);






