/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 631029A2882F117533E4BF3D3F62B1930FA388DB860BE4FB14B195DC2214CD46
 * Entry: 0x0031c68c, Ghidra index: 12337, label: FUN_0031c68c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fdf8;
void FUN_0031c68c(void)

{
  bool bVar1;
  int *in_ECX;
  char *pcVar2;
  int *piVar3;
  int iStack_4;
  
  do {
    KeSynchronizeExecution(&DAT_0032fdf8,&LAB_0031c250);
    bVar1 = false;
    pcVar2 = (char *)((int)in_ECX + 0x39);
    iStack_4 = 2;
    piVar3 = in_ECX;
    do {
      if (*pcVar2 != '\0') {
        bVar1 = true;
        if (*piVar3 == 0) {
          *pcVar2 = '\0';
        }
        else {
          do {
            FUN_0031c561();
            *pcVar2 = *pcVar2 + -1;
          } while (*pcVar2 != '\0');
        }
      }
      piVar3 = piVar3 + 1;
      pcVar2 = pcVar2 + 2;
      iStack_4 = iStack_4 + -1;
    } while (iStack_4 != 0);
  } while (bVar1);
  return;
}
