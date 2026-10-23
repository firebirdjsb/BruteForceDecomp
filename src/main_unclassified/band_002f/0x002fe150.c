/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 694B8D8D5C9A00429C0F7A1DFFEDB8F460E1A7772AB60D57942893A4824FDF48
 * Entry: 0x002fe150, Ghidra index: 10998, label: FUN_002fe150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7d1c;
extern uint32_t DAT_004a90e4;
/* WARNING: Removing unreachable block (ram,0x002fe17e) */

void FUN_002fe150(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte in_AF;
  bool bVar3;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  undefined4 local_8;
  
  bVar3 = DAT_003b7d1c == 0;
  if ((int)DAT_003b7d1c < 0) {
    local_8 = 0;
    uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
            0x80 | (uint)bVar3 * 0x40 | (uint)(in_AF & 1) * 0x10 |
            (uint)((POPCOUNT(DAT_003b7d1c & 0xff) & 1U) == 0) * 4 | (uint)(in_ID & 1) * 0x200000 |
            (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
            (uint)(in_AC & 1) * 0x40000;
    uVar2 = uVar4 ^ 0x200000;
    if ((((uint)((uVar2 & 0x4000) != 0) * 0x4000 | (uint)((uVar2 & 0x200) != 0) * 0x200 |
          (uint)((uVar2 & 0x100) != 0) * 0x100 | (uint)((uVar2 & 0x80) != 0) * 0x80 |
          (uint)((uVar2 & 0x40) != 0) * 0x40 | (uint)((uVar2 & 0x10) != 0) * 0x10 |
          (uint)((uVar2 & 4) != 0) * 4 | (uint)((uVar2 & 0x200000) != 0) * 0x200000 |
         (uint)((uVar2 & 0x40000) != 0) * 0x40000) != uVar4) &&
       (iVar1 = cpuid_Version_info(1), (*(uint *)(iVar1 + 8) & 0x800000) != 0)) {
      local_8 = 1;
    }
    DAT_003b7d1c = local_8;
    bVar3 = local_8 == 0;
  }
  if ((bVar3) || (DAT_004a90e4 = 1, (param_1 & 0x40000) != 0)) {
    DAT_004a90e4 = 0;
  }
  return;
}
