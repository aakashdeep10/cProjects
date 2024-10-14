#include <stdio.h>
/*****************************************************
* Header!!
*
* Name: Aakashdeep Singh
* Student ID: 991715817
*
******************************************************/
/*---------------Part 1:Algorithm Analysis----------------

int count = 0 : This line initializes the integer value count to 0.
                Therefore the time complexity of this is O(1).

for (int i = 0; i < n; i++) : This is the for loop which starts from 0 and runs till n times.
                               So, the time complexity for this should be O(n).

if (arr[i] % 2 == 0) : This will check the number is even or not using the modulus operator. The modulos 
                        operation is a constant time operation. So the time complexity for this is O(n).

++count : This will increment the count variable by 1 if the number is even. This is also a constant time 
            operation so its time complexity is also O(n).

return count : This will return the total number of elements in the array. This is again a constant time
                operation so its time complexity is O(n).

Therefore, the overall time complexity is O(n)

*/
//-----------------------------Part 2------------------------

struct Vec3 {
	float x, y, z;
};


void vec3_Set(struct Vec3 *v, float x, float y, float z);
void vec3_Zero(struct Vec3 *);
void vec3_Print(const struct Vec3 *);
// this function must implement the some of two vectors and store the result in the third one
void vec3_Add(const struct Vec3 *, const struct Vec3 *, struct Vec3 *);
// this function must multiple the vector by sacalar a and store the result in the third argument 
void vec3_SMul(const struct Vec3 *,float ,struct Vec3 *);

/******************************************************
*
*******************************************************/

// main program
int main(void)
{
	/******************************************************
	* Your main method code goes here
	*******************************************************/
	//All your function must be tested

	 struct Vec3 v1, v2, v3, v4;

    // Set values for the first two vectors
    vec3_Set(&v1, 1.0f, 2.0f, 3.0f);
    vec3_Set(&v2, 4.0f, 5.0f, 6.0f);

    // Add v1 and v2, store the result in v3
    vec3_Add(&v1, &v2, &v3);

    // Multiply v3 by a scalar and store the result in v4
    vec3_SMul(&v3, 2.0f, &v4);

    // Print all four vectors
    printf("Vector 1:\n");
    vec3_Print(&v1);

    printf("Vector 2:\n");
    vec3_Print(&v2);

    printf("Result of Vector 1 + Vector 2 (stored in Vector 3):\n");
    vec3_Print(&v3);

    printf("Result of Vector 3 multiplied by 2 (stored in Vector 4):\n");
    vec3_Print(&v4);

	return 0;
}

/******************************************************
* Your function definitions should go here
*******************************************************/

void vec3_Set(struct Vec3 *v, float x, float y, float z) {
    v->x = x;
    v->y = y;
    v->z = z;
};

void vec3_Zero(struct Vec3 *v) {
    v->x = 0;
    v->y = 0;
    v->z = 0;
};

void vec3_Print(const struct Vec3 *v) {
    printf("Vec3: [x = %.2f, y = %.2f, z = %.2f]\n", v->x, v->y, v->z);
};

void vec3_Add(const struct Vec3 *v1, const struct Vec3 *v2, struct Vec3 *v3) {
    v3->x = v1->x + v2->x;
    v3->y = v1->y + v2->y;
    v3->z = v1->z + v2->z;
};

void vec3_SMul(const struct Vec3 *v, float scalar, struct Vec3 *result) {
    result->x = v->x * scalar;
    result->y = v->y * scalar;
    result->z = v->z * scalar;
};

