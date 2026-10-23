/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 17683C16D047BF0C988F758E73D70B88CCC2DEB55EC6E0849176C02DD9623A6F
 * Entry: 0x00155450, Ghidra index: 4465, label: FUN_00155450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004699a0;
extern uint32_t PTR_DAT_00400864;
void FUN_00155450(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((ushort)DAT_004699a0 < 0xfff) {
    uVar1 = DAT_004699a0 + 1;
  }
  else {
    uVar1 = 0;
  }
  uVar2 = uVar1 & 0xffff;
  uVar3 = *(uint *)(PTR_DAT_00400864 + (uVar2 >> 5) * 4) & 1 << ((byte)uVar2 & 0x1f);
  while (uVar3 != 0) {
    if ((ushort)uVar1 < 0xfff) {
      uVar1 = uVar2 + 1;
    }
    else {
      uVar1 = 0;
    }
    uVar2 = uVar1 & 0xffff;
    uVar3 = *(uint *)(PTR_DAT_00400864 + (uVar2 >> 5) * 4) & 1 << ((byte)uVar2 & 0x1f);
  }
  uVar3 = (uVar1 & 0xffff) >> 5;
  DAT_004699a0 = bf_x86_word_replace_lo16(DAT_004699a0,(uint16_t)uVar1);
  *(uint *)(PTR_DAT_00400864 + uVar3 * 4) =
       *(uint *)(PTR_DAT_00400864 + uVar3 * 4) | 1 << ((byte)uVar1 & 0x1f);
  return;
}
