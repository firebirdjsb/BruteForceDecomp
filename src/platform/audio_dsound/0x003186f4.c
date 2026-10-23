/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15CA094E9EE8BBA18597985D738AD2844DCF71F714BDBC98ACCB3C0CB8D35455
 * Entry: 0x003186f4, Ghidra index: 12200, label: CMcpxVoiceClient_SetPitch
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
extern uint32_t _DAT_fe8202f8;
extern uint32_t _DAT_fe82037c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DSOUND__CMcpxVoiceClient_SetPitch(void)

{
  ushort *puVar1;
  int in_ECX;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  
  FUN_003118f0();
  if ((*(uint *)(*(int *)(in_ECX + 0x78) + 8) & 0x182000) == 0) {
    if ((*(byte *)(in_ECX + 0x12) & 1) != 0) {
      FUN_00317a6a(&local_8);
      do {
      } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 2);
      uVar2 = 0;
      if (*(byte *)(in_ECX + 100) != 0) {
        puVar1 = (ushort *)(in_ECX + 0xc);
        do {
          _DAT_fe8202f8 = (uint)*puVar1;
          _DAT_fe82037c = local_8;
          uVar2 = uVar2 + 1;
          puVar1 = puVar1 + 1;
        } while (uVar2 < *(byte *)(in_ECX + 100));
      }
    }
  }
  else {
    for (puVar3 = *(undefined4 **)(in_ECX + 0x44); puVar3 != (undefined4 *)(in_ECX + 0x44);
        puVar3 = (undefined4 *)*puVar3) {
      CMcpxVoiceClient_SetPitch();
    }
  }
  FUN_00311923();
  return 0;
}
