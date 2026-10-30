/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF1F73A9A64A708A5AEEB7CDDE83BC665E4E44EED7A9209DF4E59AC08C35FA97
 * Entry: 0x001ed6f0, Ghidra index: 6935, label: FUN_001ed6f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern char s_Parameters_004071bc[];
void FUN_001ed6f0(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  uint uVar3;
  char *pcVar4;
  
  iVar1 = in_ECX + in_EAX * 0x18;
  *(undefined1 *)(iVar1 + 0x5630) = 0;
  pcVar4 = s_Parameters_004071bc;
  FUN_002e5920(s_Parameters_004071bc);
  iVar2 = FUN_002e4a30(pcVar4);
  if (in_EAX == 1) {
    uVar3 = *(uint *)(iVar2 + 0x21c) & 0xfffffffe;
  }
  else if (in_EAX == 2) {
    uVar3 = *(uint *)(iVar2 + 0x21c) & 0xfffffffd;
  }
  else {
    if (in_EAX != 3) goto LAB_001ed746;
    uVar3 = *(uint *)(iVar2 + 0x21c) & 0xfffffffb;
  }
  *(uint *)(iVar2 + 0x21c) = uVar3;
LAB_001ed746:
  if ((*(int *)(in_ECX + 0x1c) == 2) && (*(char *)(in_ECX + 0x2e25) == '\0')) {
    *(uint *)(iVar2 + 0x21c) = *(uint *)(iVar2 + 0x21c) | 8;
  }
  FUN_001ece40(&DAT_0046d064);
  if (*(int *)(in_ECX + 0x18) != 0) {
    FUN_002e7a40(*(undefined4 *)(iVar1 + 0x5638));
  }
  return;
}
