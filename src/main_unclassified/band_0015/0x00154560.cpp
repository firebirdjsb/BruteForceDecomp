/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1239B6B6B2033CA1F6E86E10983F11D012DDAB4379A7D43854DDA58DAB57F369
 * Entry: 0x00154560, Ghidra index: 4440, label: FUN_00154560
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x00307520; address-only external declaration.
 * Linked symbol definition, role and calling convention are unverified. */
extern unsigned char LAB_00307520;
void FUN_00154560(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307520;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_00154290();
    }
    param_1 = param_1 + 0x54;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
