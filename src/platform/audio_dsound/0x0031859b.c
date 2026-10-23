/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3C846A085AD5AD79CA48CA40AD1DAC394F59E1FAAC2B08C0D5F8134C6E6B14F
 * Entry: 0x0031859b, Ghidra index: 12198, label: CMcpxVoiceClient_SetMixBins
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe8202fc;
extern uint32_t _DAT_fe820300;
extern uint32_t _DAT_fe820304;
extern uint32_t _DAT_fe820360;
extern uint32_t _DAT_fe820364;
extern uint32_t _DAT_fe820368;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DSOUND__CMcpxVoiceClient_SetMixBins(void)

{
  int in_ECX;
  uint uVar1;
  ushort *puVar2;
  undefined4 local_34 [10];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  FUN_003118f0();
  if ((*(byte *)(in_ECX + 0x12) & 1) != 0) {
    FUN_00317798(&local_8,(uint *)(in_ECX + 0x14));
    FUN_0031786d(local_34);
    do {
    } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) << 3);
    uVar1 = 0;
    if (*(byte *)(in_ECX + 100) != 0) {
      puVar2 = (ushort *)(in_ECX + 0xc);
      do {
        _DAT_fe8202f8 = (uint)*puVar2;
        _DAT_fe820300 = local_8;
        _DAT_fe820304 = *(uint *)(in_ECX + 0x14);
        if (uVar1 != 0) {
          _DAT_fe820304 = _DAT_fe820304 | 0x400000;
        }
        _DAT_fe820360 = local_34[uVar1];
        _DAT_fe820364 = local_34[uVar1 + 3];
        _DAT_fe820368 = local_34[uVar1 + 6];
        _DAT_fe8202fc = 0;
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar1 < *(byte *)(in_ECX + 100));
    }
  }
  FUN_00311923();
  return 0;
}
