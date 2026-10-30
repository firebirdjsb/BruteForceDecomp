/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CC78D0B556DA3563EE87ABA487780D9F0210DBC0AA07FA7B24B5AE3CAFA2841B
 * Entry: 0x000a6f60, Ghidra index: 1978, label: FUN_000a6f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_000a6fd0(void);

undefined4 FUN_000a6f60(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x44);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_000a6fd0();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  *param_3 = iVar1;
  return 0;
}
