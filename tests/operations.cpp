#include "operations.h"
#include <mockito>
class TestOperations {

	int a;
	int b;
	void setup() {
		a=5;
		b=2;
	}
	
	void testAdd() {
		int expected = add(a,b);
		assertEquals(expected, 7);
	}

	void testSubtract() {
		int expected = subtract(a,b);
		assertEquals(expected, 3);
	}

	void testMultiply() {
		int expected = subtract(a,b);
		assertEquals(expected, 10);
	}

}