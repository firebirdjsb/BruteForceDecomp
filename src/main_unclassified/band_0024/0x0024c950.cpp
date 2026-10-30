/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CB327455045BDA446212238076C559B70C635B9EA07A13F03441D4DE6961546B
 * Entry: 0x0024c950, Ghidra index: 8294, label: FUN_0024c950
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00393ba4;
extern uint32_t PTR_FUN_00393bc0;
extern uint32_t PTR_FUN_00393be0;
extern uint32_t PTR_FUN_0039af70;
void FUN_0024c950(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  unaff_ESI[1] = PTR_FUN_0039af70;
  unaff_ESI[2] = PTR_FUN_0039af70;
  *unaff_ESI = PTR_FUN_00393be0;
  unaff_ESI[1] = PTR_FUN_00393bc0;
  unaff_ESI[2] = PTR_FUN_00393ba4;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[0x14] = 0;
  *(undefined2 *)(unaff_ESI + 0x15) = 0;
  *(undefined1 *)(unaff_ESI + 0x16) = local_1;
  iVar1 = FUN_0025ae60(unaff_ESI + 0x16);
  unaff_ESI[0x17] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(unaff_ESI[0x17] + 4) = unaff_ESI[0x17];
  *(undefined4 *)unaff_ESI[0x17] = unaff_ESI[0x17];
  *(undefined4 *)(unaff_ESI[0x17] + 8) = unaff_ESI[0x17];
  unaff_ESI[0x18] = 0;
  unaff_ESI[0x1a] = 0;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 0;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x20] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x24] = 0;
  uVar2 = FUN_00061500(unaff_ESI + 0x25);
  unaff_ESI[0x26] = uVar2;
  unaff_ESI[0x27] = 0;
  uVar2 = FUN_00061500(unaff_ESI + 0x28);
  unaff_ESI[0x29] = uVar2;
  unaff_ESI[0x2a] = 0;
  unaff_ESI[0x2b] = 0;
  unaff_ESI[0x2c] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[0x10] = 0x3f800000;
  unaff_ESI[0xc] = 0x3f800000;
  unaff_ESI[8] = 0x3f800000;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x11] = 0;
  return;
}
