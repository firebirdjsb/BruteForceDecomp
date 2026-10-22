/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 385D428837122D204CC5AF5D58626159F47031D3CE5EF728F7605231AF6FE8D6
 * Entry: 0x00087bf0, Ghidra index: 1626, label: FUN_00087bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a5b2c;
undefined4 FUN_00087bf0(char *param_1)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *unaff_EDI;
  
  pcVar5 = param_1;
  if ((*(int *)(unaff_EDI + 0x48) == 0) || (*unaff_EDI != '\0')) {
    pcVar2 = in_EAX;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(in_EAX,(int)pcVar2 - (int)(in_EAX + 1));
    if (pcVar5 == (char *)0x0) {
      pcVar5 = &DAT_004a5b2c;
    }
    pcVar2 = pcVar5;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_0001fed0(pcVar5,(int)pcVar2 - (int)(pcVar5 + 1));
    *unaff_EDI = '\0';
    unaff_EDI[4] = '\x05';
    unaff_EDI[5] = '@';
    unaff_EDI[6] = '\0';
    unaff_EDI[7] = -0x80;
    unaff_EDI[0xc] = '\0';
    iVar3 = FUN_002ea01d(0xc84);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_000d45d0();
    }
    *(undefined4 *)(unaff_EDI + 8) = uVar4;
    iVar3 = XAPILIB__CreateThread(0,0x8000,FUN_00087cc0,unaff_EDI,0,&param_1);
    *(int *)(unaff_EDI + 0x48) = iVar3;
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = *(int *)(unaff_EDI + 8);
    if (iVar3 != 0) {
      FUN_000d4bf0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar3);
    }
  }
  return 0x80004005;
}
