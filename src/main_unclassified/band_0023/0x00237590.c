/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C8B0A3A4CDAA3F0B099CC73C167900BE3EA1D5B19AEA12E59917454D7313078E
 * Entry: 0x00237590, Ghidra index: 7851, label: FUN_00237590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s__d_heap__________________________00406c78[];
extern char s_ablock___08X__d_bytes_00406c60[];
extern char s_fblock___08X__d_bytes_00406c48[];
void FUN_00237590(void)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 unaff_EBX;
  undefined4 *puVar5;
  uint *unaff_EDI;
  undefined1 local_108 [4];
  char local_104 [260];
  
  FUN_002eaa19(local_104,0x104,s__d_heap__________________________00406c78,
               (int)*(short *)((int)unaff_EDI + 0x12));
  pcVar3 = local_104;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  XAPILIB__WriteFile(unaff_EBX,local_104,(int)pcVar3 - (int)(local_104 + 1),local_108,0);
  puVar5 = (undefined4 *)*unaff_EDI;
  do {
    if ((puVar5 < (undefined4 *)*unaff_EDI) || ((undefined4 *)unaff_EDI[2] <= puVar5)) {
      return;
    }
    for (puVar4 = (undefined4 *)unaff_EDI[1];
        ((undefined4 *)*unaff_EDI <= puVar4 && (puVar4 < (undefined4 *)unaff_EDI[2]));
        puVar4 = (undefined4 *)*puVar4) {
      if (puVar5 == puVar4) {
        sVar2 = *(short *)((int)unaff_EDI + 0x12);
        pcVar3 = s_fblock___08X__d_bytes_00406c48;
        goto LAB_00237630;
      }
    }
    sVar2 = *(short *)((int)unaff_EDI + 0x12);
    pcVar3 = s_ablock___08X__d_bytes_00406c60;
LAB_00237630:
    FUN_002eaa19(local_104,0x104,pcVar3,puVar5,(int)sVar2);
    pcVar3 = local_104;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    XAPILIB__WriteFile(unaff_EBX,local_104,(int)pcVar3 - (int)(local_104 + 1),local_108,0);
    puVar5 = (undefined4 *)((int)puVar5 + (int)*(short *)((int)unaff_EDI + 0x12));
  } while( true );
}
