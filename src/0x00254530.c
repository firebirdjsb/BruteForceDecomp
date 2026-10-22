/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3D1B61B06C756D2A41EF29027B0DEA90A28F7D3C0416CB65848770A6E855EA9
 * Entry: 0x00254530, Ghidra index: 8414, label: FUN_00254530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_ISchema_00406e3c[];
undefined4 FUN_00254530(void)

{
  int *piVar1;
  int *in_EAX;
  int *unaff_EDI;
  int *piStack_18;
  int *apiStack_8 [2];
  
  if ((*(byte *)(in_EAX + 5) & 2) == 0) {
    in_EAX[8] = 0;
    return 0;
  }
  piStack_18 = in_EAX;
  (**(code **)(*in_EAX + 4))();
  piVar1 = (int *)in_EAX[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    while (piVar1 != (int *)0x0) {
      if (apiStack_8[0] != (int *)0x0) {
        (**(code **)(*apiStack_8[0] + 8))(apiStack_8[0]);
        apiStack_8[0] = (int *)0x0;
      }
      (**(code **)(*piVar1 + 0x10))(piVar1,s_23_23_ISchema_00406e3c,apiStack_8);
      if (unaff_EDI == (int *)0x0) {
        if ((piStack_18 != (int *)0x0) &&
           ((**(code **)(*piStack_18 + 8))(piStack_18), piStack_18 != (int *)0x0)) {
          (**(code **)(*piStack_18 + 8))(piStack_18);
        }
        return 0x80004005;
      }
      if (piStack_18 != (int *)0x0) {
        (**(code **)(*piStack_18 + 8))(piStack_18);
        piStack_18 = (int *)0x0;
      }
      (**(code **)(*unaff_EDI + 0x1c))(unaff_EDI,&piStack_18);
    }
  }
  (**(code **)(*apiStack_8[0] + 0x24))(apiStack_8[0],in_EAX + 8,0);
  if (piStack_18 != (int *)0x0) {
    (**(code **)(*piStack_18 + 8))(piStack_18);
    piStack_18 = (int *)0x0;
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return 0;
}
