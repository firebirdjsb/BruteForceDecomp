/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C55392E8CDCBAD832D14744D4876B6631B9818ABB927D5C2480951370F1B9A1
 * Entry: 0x000dbc50, Ghidra index: 2700, label: FUN_000dbc50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_0006a610(int *param_1);

extern uint32_t DAT_0040d5d4;
void FUN_000dbc50(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *unaff_ESI;
  uint local_c [3];
  
  local_c[0] = (uint)*unaff_ESI;
  FUN_0006a610(local_c);
  local_c[2] = (uint)unaff_ESI[1];
  local_c[0] = 0xff;
  local_c[1] = 0;
  if (unaff_ESI[1] < 0x100) {
    puVar1 = local_c + 2;
  }
  else {
    puVar1 = local_c;
  }
  local_c[0] = (uint)unaff_ESI[2];
  local_c[2] = 0xff;
  local_c[1] = 0;
  if (unaff_ESI[2] < 0x100) {
    puVar2 = local_c;
  }
  else {
    puVar2 = local_c + 2;
  }
  local_c[0] = (uint)unaff_ESI[3];
  local_c[2] = 0xff;
  local_c[1] = 0;
  if (unaff_ESI[3] < 0x100) {
    puVar3 = local_c;
  }
  else {
    puVar3 = local_c + 2;
  }
  local_c[2] = ((*puVar1 | 0xffffff00) << 8 | *puVar2 & 0xff) << 8 | *puVar3 & 0xff;
  FUN_0006a610(local_c + 2);
  if (*unaff_ESI != 0) {
    local_c[2] = *(uint *)(&DAT_0040d5d4 + *(int *)(unaff_ESI + 4) * 4);
    FUN_0006a610(local_c + 2);
    local_c[2] = *(uint *)(unaff_ESI + 8);
    FUN_0006a610(local_c + 2);
    if (*(int *)(unaff_ESI + 4) == 0) {
      local_c[2] = *(uint *)(unaff_ESI + 0xc);
      FUN_0006a610(local_c + 2);
      local_c[2] = *(uint *)(unaff_ESI + 0x10);
      FUN_0006a610(local_c + 2);
    }
  }
  return;
}
