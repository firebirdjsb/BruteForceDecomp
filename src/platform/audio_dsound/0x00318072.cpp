/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE2D52750F3E0B9DB5CBB25BFEA55843D413499B6D4791493AADB68BBAC75B2B
 * Entry: 0x00318072, Ghidra index: 12192, label: CMcpxVoiceClient_SetEG
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
extern uint32_t _DAT_fe820308;
extern uint32_t _DAT_fe82030c;
extern uint32_t _DAT_fe820310;
extern uint32_t _DAT_fe820314;
extern uint32_t _DAT_fe820318;
extern uint32_t _DAT_fe82036c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DSOUND__CMcpxVoiceClient_SetEG(int *param_1)

{
  ushort *puVar1;
  int in_ECX;
  uint uVar2;
  
  FUN_003118f0();
  if (*param_1 == 0) {
    *(uint *)(in_ECX + 0x40) =
         *(uint *)(in_ECX + 0x40) ^ (param_1[1] << 0x18 ^ *(uint *)(in_ECX + 0x40)) & 0xf000000;
    *(uint *)(in_ECX + 0x18) =
         *(uint *)(in_ECX + 0x18) ^ (param_1[6] ^ *(uint *)(in_ECX + 0x18)) & 0xfff;
    *(char *)(in_ECX + 0x1f) = (char)param_1[8];
    *(uint *)(in_ECX + 0x24) =
         *(uint *)(in_ECX + 0x24) ^ (param_1[3] ^ *(uint *)(in_ECX + 0x24)) & 0xfff;
    *(uint *)(in_ECX + 0x24) =
         (param_1[2] << 0xc ^ *(uint *)(in_ECX + 0x24)) & 0xfff000 ^ *(uint *)(in_ECX + 0x24);
    *(char *)(in_ECX + 0x27) = (char)param_1[9];
    *(uint *)(in_ECX + 0x28) =
         *(uint *)(in_ECX + 0x28) ^ (param_1[5] ^ *(uint *)(in_ECX + 0x28)) & 0xfff;
    *(uint *)(in_ECX + 0x28) =
         (param_1[4] << 0xc ^ *(uint *)(in_ECX + 0x28)) & 0xfff000 ^ *(uint *)(in_ECX + 0x28);
    *(char *)(in_ECX + 0x2b) = (char)param_1[7];
  }
  else if (*param_1 == 1) {
    *(uint *)(in_ECX + 0x40) = param_1[1] << 0x1c | *(uint *)(in_ECX + 0x40) & 0xfffffff;
    *(uint *)(in_ECX + 0x30) =
         *(uint *)(in_ECX + 0x30) ^ (param_1[6] ^ *(uint *)(in_ECX + 0x30)) & 0xfff;
    *(uint *)(in_ECX + 0x1c) =
         *(uint *)(in_ECX + 0x1c) ^ (param_1[3] ^ *(uint *)(in_ECX + 0x1c)) & 0xfff;
    *(uint *)(in_ECX + 0x1c) =
         (param_1[2] << 0xc ^ *(uint *)(in_ECX + 0x1c)) & 0xfff000 ^ *(uint *)(in_ECX + 0x1c);
    *(uint *)(in_ECX + 0x20) =
         *(uint *)(in_ECX + 0x20) ^ (param_1[5] ^ *(uint *)(in_ECX + 0x20)) & 0xfff;
    *(uint *)(in_ECX + 0x20) =
         (param_1[4] << 0xc ^ *(uint *)(in_ECX + 0x20)) & 0xfff000 ^ *(uint *)(in_ECX + 0x20);
    *(char *)(in_ECX + 0x23) = (char)param_1[7];
  }
  if ((*(byte *)(in_ECX + 0x12) & 1) != 0) {
    do {
    } while (_DAT_fe820010 >> 2 < (uint)*(byte *)(in_ECX + 100) * 9);
    uVar2 = 0;
    if (*(byte *)(in_ECX + 100) != 0) {
      puVar1 = (ushort *)(in_ECX + 0xc);
      do {
        _DAT_fe8202f8 = (uint)*puVar1;
        _DAT_fe820318 = *(undefined4 *)(in_ECX + 0x18);
        _DAT_fe820308 = *(undefined4 *)(in_ECX + 0x1c);
        _DAT_fe82030c = *(undefined4 *)(in_ECX + 0x20);
        _DAT_fe820310 = *(undefined4 *)(in_ECX + 0x24);
        _DAT_fe820314 = *(undefined4 *)(in_ECX + 0x28);
        _DAT_fe82036c = *(undefined4 *)(in_ECX + 0x30);
        _DAT_fe8202fc = 0;
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar2 < *(byte *)(in_ECX + 100));
    }
  }
  FUN_00311923();
  return 0;
}
