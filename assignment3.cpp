#include "ComplexClass.h"
#include"LLclass.h"
using namespace std;
int main()
{
	ll CN(4, 5); CN.ins_end(3, -3); CN.ins_end(4,3);
	cout << "Adding First Three Number:" << endl; CN.trans();
	CN.ins_end(CN.val_at_pos(1)->add(CN.val_at_pos(2))); cout << "Adding 1st and 2nd Number and adding that at end of list:" << endl; CN.trans();
	CN.ins_end(CN.val_at_pos(1)->sub(CN.val_at_pos(3))); cout << "Subtracting 1st and 3rd Number and adding that at end of list:" << endl; CN.trans();
	CN.ins_end(CN.val_at_pos(2)->mul(CN.val_at_pos(3))); cout << "Multiply 2nd and 3rd Number and adding that at end of list:" << endl; CN.trans();
	cout << "Dividing 1st and 3rd Number and adding that at end of list:" << endl; try{ CN.ins_end(CN.val_at_pos(1)->div(CN.val_at_pos(3))); }
	catch (const char* msg) 
	{
		cerr << msg << endl;
	}
	CN.trans();
	Complex *temp = new Complex;
	temp->COPY(CN.val_at_pos(4));
	CN.del_pos(4); cout << "Deleting Complex Number at 4th Position and copying it to a Temporary variable:" << endl; CN.trans();
	CN.ins_end(temp); cout << "Adding Temporary variable at the end of list:" << endl; CN.trans(); cout << endl << "NOW USING OPERATOR OVERLOADING" << endl << endl;
	
	ll CN2(4, 5); CN2.ins_end(3, -3); CN2.ins_end(4,3);
	cout << "Adding First Three Number:" << endl; CN2.trans();
	CN2.ins_end(*CN2.val_at_pos(1)+*CN2.val_at_pos(2)); cout << "Adding 1st and 2nd Number and adding that at end of list:" << endl; CN2.trans();
	CN2.ins_end(*CN2.val_at_pos(1)-*(CN2.val_at_pos(3))); cout << "Subtracting 1st and 3rd Number and adding that at end of list:" << endl; CN2.trans();
	CN2.ins_end(*CN2.val_at_pos(2)*(*CN2.val_at_pos(3))); cout << "Multiply 2nd and 3rd Number and adding that at end of list:" << endl; CN2.trans();
	cout << "Dividing 1st and 3rd Number and adding that at end of list:" << endl; try{ CN2.ins_end(*CN2.val_at_pos(1)/(*CN2.val_at_pos(3))); }
	catch (const char* msg) 
	{
		cerr <<endl<<msg <<endl<< endl;
	}
	CN2.trans();
	Complex *temp1 = new Complex;
	temp1->COPY(CN2.val_at_pos(4));
	CN2.del_pos(4); cout << "Deleting Complex Number at 4th Position and copying it to a Temporary variable:" << endl; CN2.trans();
	CN2.ins_end(temp1); cout << "Adding Temporary variable at the end of list:" << endl; CN2.trans();
	system("pause");
	
	return 0;
}