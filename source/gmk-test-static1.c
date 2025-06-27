#include "gmk-test-static1.h"

#include <stdio.h>

#include "gmk-test-static2.h"

void gmk_test_static1(void)
{
	printf("gmk_test_static1()\n");

	gmk_test_static2(5, "gmk_test_static1()");
}
