/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 960EC1A8877B57C1FB785560215B2FC9775BA58A751EF342BE10D913B75F6117
 * Entry: 0x00242330, Ghidra index: 8028, label: FUN_00242330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00242330(void)

{
  int in_EAX;
  int iVar1;
  int *in_ECX;
  
  if (in_EAX == 0) {
    FUN_002437f0();
    return;
  }
  if (*in_ECX == 0) {
    iVar1 = FUN_002ea01d(0x10);
    if (iVar1 != 0) {
      FUN_00245960(iVar1);
      *in_ECX = iVar1;
      FUN_00245ae0();
      return;
    }
    *in_ECX = 0;
    FUN_00245ae0();
  }
  return;
}
