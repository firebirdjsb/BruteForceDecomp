/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF26939BCE9CD41B6C0B705E831A6070537B9EFBBD9C0DD679FC567E4752B26C
 * Entry: 0x00260c60, Ghidra index: 8628, label: FUN_00260c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b258;
int * FUN_00260c60(int *param_1)

{
  int *piVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  int *piVar3;
  
  RtlEnterCriticalSection(&DAT_0046b258);
  puVar2 = (undefined4 *)0x0;
  if (*(undefined4 **)(in_EAX + 0xc) != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)**(undefined4 **)(in_EAX + 0xc);
  }
  do {
    if (puVar2 == *(undefined4 **)(in_EAX + 0xc)) {
      if (unaff_EBX != (undefined4 *)0x0) {
        *unaff_EBX = 0;
      }
      RtlLeaveCriticalSection(&DAT_0046b258);
      return (int *)0x0;
    }
    piVar1 = *(int **)(puVar2[2] + 0x18);
    piVar3 = *(int **)(puVar2[2] + 0x14);
    if (piVar3 != piVar1) {
      do {
        if (*piVar3 == *param_1) {
          if (unaff_EBX != (undefined4 *)0x0) {
            *unaff_EBX = puVar2[2];
          }
          RtlLeaveCriticalSection(&DAT_0046b258);
          return piVar3;
        }
        piVar3 = piVar3 + 6;
      } while (piVar3 != piVar1);
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}
