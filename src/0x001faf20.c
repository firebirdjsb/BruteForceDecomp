/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F9A36EAD2CCFFB2D401C64E58074539398E10A4D24923D071B8F345976C1D48F
 * Entry: 0x001faf20, Ghidra index: 7105, label: FUN_001faf20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined1 FUN_001faf20(char param_1,int *param_2,int *param_3,char *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((*param_4 == '\0') && (*param_2 == *param_3)) {
    if (param_1 != '\0') {
      FUN_0015b9d0();
      *param_4 = '\x01';
      return 0;
    }
    FUN_0015b9d0();
    uVar1 = 1;
    *param_4 = '\x01';
  }
  return uVar1;
}
