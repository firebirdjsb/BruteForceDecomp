/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C00D9EEF87BB4811DF5A0CBA2A71897DA3950268EED1769AD365D19775A42D23
 * Entry: 0x00023010, Ghidra index: 215, label: FUN_00023010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00038cf0(int param_1,int param_2);

int * FUN_00023010(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int in_EAX;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(in_EAX + 0xc);
  if (*(char *)(in_EAX + 0x14) == '\0') {
    for (puVar2 = *(undefined4 **)(in_EAX + 8); (puVar2 != puVar1 && (*(int *)*puVar2 != param_2));
        puVar2 = puVar2 + 1) {
    }
    *param_1 = (int)puVar2;
    return param_1;
  }
  FUN_00038cf0(*(undefined4 *)(in_EAX + 8),puVar1,0);
  if ((param_1 != *(int **)(in_EAX + 0xc)) && (*(int *)*param_1 == param_2)) {
    *param_1 = (int)param_1;
    return param_1;
  }
  *param_1 = (int)puVar1;
  return param_1;
}
