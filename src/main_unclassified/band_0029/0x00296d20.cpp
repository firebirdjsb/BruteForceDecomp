/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1496ABF047BC05D638F13BF8D95EC2986FD0E1F23352F033A41E0A53A571D55C
 * Entry: 0x00296d20, Ghidra index: 9336, label: FUN_00296d20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00404954;
extern uint32_t DAT_00469888;
float10 FUN_00296d20(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_14 [2];
  undefined4 local_c;
  
  local_14[0] = 0xfffffffe;
  pcVar1 = (char *)&DAT_00404954;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  pcVar2 = pcVar2 + -0x404954;
  if (pcVar2 == (char *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)((uint)DAT_00404954 * (int)pcVar2) % 0x1f;
  }
  local_c = FUN_00294640(&DAT_00404954,pcVar2,*(int *)(DAT_00469888 + 0x60) + iVar3 * 0xc);
  iVar3 = FUN_00293c90(local_14);
  if (*(int *)(iVar3 + 0x10) == -1) {
    return (float10)*(double *)(iVar3 + 0x18);
  }
  fVar4 = (float10)FUN_00296ce0();
  return fVar4;
}
