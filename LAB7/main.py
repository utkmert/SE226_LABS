import cv2
import numpy as np

image = cv2.imread('cit.jpg')

blue, green, red = cv2.split(image)

cv2.imshow('Blue', blue)
cv2.imshow('Green', green)
cv2.imshow('Red', red)

redGreenImage = cv2.merge([np.zeros_like(blue), green, red])
cv2.imshow("Red Green Image", redGreenImage)

originalImage = cv2.merge([blue, green, red])
cv2.imshow('Combined Image', originalImage)


cv2.waitKey(0)
cv2.destroyAllWindows()
