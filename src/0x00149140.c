/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EAFD35695ADA3E3E9A2050CC4F31829F46DF71BED88041A6E0F3D68E96148220
 * Entry: 0x00149140, Ghidra index: 4267, label: FUN_00149140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b7ec;
extern uint32_t PTR_LAB_0039b7e8;
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00149140(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_002ea01d(0x1dc);
  if (piVar1 != (int *)0x0) {
    FUN_00145d90();
    *piVar1 = (int)&PTR_FUN_0039b7ec;
    piVar1[6] = (int)&PTR_LAB_0039b7e8;
    piVar1[0x75] = 0;
    piVar1[1] = 0x18;
    (**(code **)(*piVar1 + 4))();
    return piVar1;
  }
  (**(code **)(_DAT_00000000 + 4))();
  return (int *)0x0;
}
