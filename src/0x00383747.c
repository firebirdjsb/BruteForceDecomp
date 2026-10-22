/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA6AA5CF6CEC8C722A3D75F1147140D6703DC1E676DABF868523E7B53DED71DB
 * Entry: 0x00383747, Ghidra index: 13619, label: FUN_00383747
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00383747(void)

{
  int iVar1;
  uint uVar2;
  int in_EDX;
  
  iVar1 = *(int *)(in_EDX + 0x10);
  uVar2 = *(uint *)(in_EDX + 0x14);
  if ((uVar2 & 4) != 0) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffd;
  }
  if ((uVar2 & 8) != 0) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 2;
  }
  if (((uVar2 & 1) == 0) && ((*(uint *)(iVar1 + 8) & 1) != 0)) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffe;
  }
  return 0;
}
