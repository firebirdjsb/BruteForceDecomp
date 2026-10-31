/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98032D5350BB4AD264F61C0ACBC3C494F3F19EE0BB83A92ED0FE0153F89C86C9
 * Entry: 0x00261660, Ghidra index: 8639, label: FUN_00261660
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; Xbox guest call ABI remains ABI_UNVERIFIED. */
extern undefined4 FUN_00288a70(void);
undefined4 FUN_00261660(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 3) {
    return 0;
  }
  uVar1 = FUN_00288a70();
  return uVar1;
}
