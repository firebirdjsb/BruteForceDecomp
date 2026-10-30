/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E381F537215D709C6493569535AC282EA81F73A775ABCF35B0BA63CDC32CF27
 * Entry: 0x00295a40, Ghidra index: 9329, label: FUN_00295a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t PTR_DAT_003b6c3c;
extern uint32_t PTR_DAT_003b95c0;
extern char s_invalid__if_condition_00404524[];
int FUN_00295a40(void)

{
  byte *in_EAX;
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_002951e0(&PTR_DAT_003b95c0);
  if (iVar1 < 0) {
    if (DAT_003b6c30 < 2) {
      uVar2 = *(ushort *)(PTR_DAT_003b6c3c + (uint)*in_EAX * 2) & 0x103;
    }
    else {
      uVar2 = FUN_002eba73(*in_EAX,0x103);
    }
    if ((uVar2 == 0) && (*in_EAX != 0x5f)) {
      FUN_002958c0(s_invalid__if_condition_00404524);
      return 0;
    }
    iVar1 = FUN_00294ac0();
  }
  return iVar1;
}
