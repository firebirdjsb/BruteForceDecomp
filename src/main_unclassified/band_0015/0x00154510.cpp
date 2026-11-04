/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F495DBFC27656AD905AAE8D5AA9A1C37F21621E968428B37A76CC58798DB3673
 * Entry: 0x00154510, Ghidra index: 4439, label: FUN_00154510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source draft 0x00154420 uses implicit guest EAX/ECX object registers.
 * This declaration matches source arity only; Xbox ABI_UNVERIFIED. */
extern void FUN_00154420(void);
int * FUN_00154510(int *param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == param_3) {
    *param_1 = param_4;
    return param_1;
  }
  do {
    param_3 = param_3 + -0x54;
    param_4 = param_4 + -0x54;
    FUN_00154420();
  } while (param_3 != param_2);
  *param_1 = param_4;
  return param_1;
}
