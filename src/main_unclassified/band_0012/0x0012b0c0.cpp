/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 318C5D4BEEEE0D51263C8F2C3860846D98605F28D23F7BD56CEE8C897AC4EA92
 * Entry: 0x0012b0c0, Ghidra index: 3783, label: FUN_0012b0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Mapped Xbox image address 0x00307580; extern label with unresolved link definition. */
extern unsigned char LAB_00307580;

int FUN_0012b0c0(int param_1,int param_2,int param_3)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307580;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_00050e20(in_ECX);
    param_3 = param_3 + 0xc;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
