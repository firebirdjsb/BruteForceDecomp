/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5B6B45E88C88FCDDC4CF0512A51ECF1391DD25288956D34B8EF5752609E42325
 * Entry: 0x001ece40, Ghidra index: 6919, label: FUN_001ece40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern char s_Parameters_004071bc[];
uint FUN_001ece40(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 uVar4;
  
  iVar1 = FUN_002e5920();
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_002e4a30(s_Parameters_004071bc);
    if (puVar2 != unaff_ESI) {
      unaff_ESI[0x84] = puVar2[0x84];
      *unaff_ESI = *puVar2;
      uVar3 = unaff_ESI[0x87] ^ ((int)(puVar2[0x87] << 0x1f) >> 0x1f ^ unaff_ESI[0x87]) & 1U;
      unaff_ESI[0x87] = uVar3;
      uVar3 = ((int)(puVar2[0x87] << 0x1e) >> 0x1e ^ uVar3) & 2 ^ uVar3;
      unaff_ESI[0x87] = uVar3;
      unaff_ESI[0x87] = ((int)(puVar2[0x87] << 0x1d) >> 0x1d ^ uVar3) & 4 ^ uVar3;
    }
    FUN_002e4980(s_Parameters_004071bc,unaff_ESI,0x224);
    uVar4 = 1;
    FUN_002e5920(1);
    FUN_002e4880(uVar4);
    uVar3 = *param_1;
    if (uVar3 != DAT_0046d064) {
      *(uint *)(unaff_EBX + 0x576c) = uVar3;
    }
  }
  return uVar3 & 0xffffff00;
}
