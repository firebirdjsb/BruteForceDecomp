# Seven exact source declarations, with original ABI mismatches retained

Base source: `f9bd13326c3094b15e28d27053d7ecf841889140`.
Completed full queue audit: `9018740307c65fbe9efc13f63b73cfbd7091bcb9`,
**4,042 / 13,694** isolated C++17 syntax passes. All fourteen selected current
caller and callee source digests equal that audit. This batch has seven focused
old-fail/new-pass results. A fresh complete audit of the final integrated tree
is required before publishing a new aggregate count.

## Scope

Only insert the existing callee definition's exact forward declaration and an
explicit limitation comment after each caller's include:

| Unchanged caller | Exact existing callee declaration |
| --- | --- |
| `0x001dcb90` | `extern int FUN_001d9150(int param_1,int param_2);` |
| `0x001dcbb0` | `extern int FUN_001e0bf0(int param_1,int param_2);` |
| `0x001dcbd0` | `extern int FUN_001e0c40(int param_1,int param_2);` |
| `0x0020d550` | `extern int FUN_0020d870(int param_1,int param_2);` |
| `0x0020d590` | `extern int FUN_0020db30(int param_1,int param_2);` |
| `0x0024ba90` | `extern int FUN_0024ab60(int param_1,int param_2);` |
| `0x0024bae0` | `extern int FUN_0024c750(int param_1,int param_2);` |

All caller signatures, function bodies, call expressions, arguments, returns
and casts remain unchanged. All callees and shared headers remain unchanged.
The entire historical inventory is unchanged, including its historical source
digest cells. The manifest separately pins source preimages, postimages,
Git blob identities, all fourteen historical inventory rows and the original
inventory file's raw-byte SHA-256. This is **source declaration admission**,
not a native ABI bridge. None of the seven queued candidates was omitted.

The two earlier declarations and their evidence gate are unchanged. This batch
has its own manifest, verifier, tests and one additional CI step. No other
source candidates are admitted.

## Original instruction evidence

The private indexed export contains fourteen complete, contiguous bodies:

| Entry and inclusive range | Bytes / instructions | Original body SHA-256 |
| --- | --- | --- |
| `001dcb90..001dcbac` | 29 / 11 | `0E4EB056CEE3FB0D16600BBA32BF24BE0C203D1F3B271C421A129619D6C1E64F` |
| `001d9150..001d9187` | 56 / 25 | `812DE254718C0AAEED1497039BF54C655DC54710BC567EF6CD49B667030C355A` |
| `001dcbb0..001dcbcc` | 29 / 11 | `FFE812D79E562B1F95A9D94643188A23ADB2D824F2E034636AD5D163F8D8A05B` |
| `001e0bf0..001e0c3f` | 80 / 33 | `F28A9D6BF6F646A0979F57C510DDC520290DB2A7C46A91D3950A2486EB31BE38` |
| `001dcbd0..001dcbec` | 29 / 11 | `14BD51DC04C00F4B6048AD9189B89341FB789592D78A7A4A5669AAC2CA342D4A` |
| `001e0c40..001e0c75` | 54 / 24 | `C073920F151DFF7C2642FC61ECDCEC3692C16757874CE643BF70EC6BD740C863` |
| `0020d550..0020d56c` | 29 / 11 | `6DD19173D6ACE943FEE4891B71F4CBCDBFF5607E7F7963F1EBC79DB06A6A1569` |
| `0020d870..0020d899` | 42 / 20 | `2B5E283FE54764D4485E4B545C1CCC70ABE29393F0748724306D45FF21F2593C` |
| `0020d590..0020d5ac` | 29 / 11 | `2FF9B08CE0ECEE8E308D5A754FFB9927C4517150F8B9866C80F6DAB2D648B5B1` |
| `0020db30..0020db67` | 56 / 26 | `A59B468F382F0A37947818287590937A1695101DBE4D0779F8F903B34C71C3E0` |
| `0024ba90..0024baac` | 29 / 11 | `15CBAB08A07118551869EE79655707AE424E5876797F054250709C36C214E6BA` |
| `0024ab60..0024ab8f` | 48 / 22 | `273DBEE2706158EF614851FBBF649F50C692C1FDB35846DEFB32BE48E1204FF5` |
| `0024bae0..0024bafc` | 29 / 11 | `9D301099EC2446E3FA81E80B35D5EFC25EEC546FD56453F30B45AE7CDE50DEDE` |
| `0024c750..0024c782` | 51 / 24 | `E3581E2236005178737F178EE62349188437623B22124093034FE86FE3DDCD14` |

All callers are 29 bytes / 11 instructions. Their non-CALL bytes are identical.
Every direct E8 target equals the named current callee. Callees have distinct
body lengths, branch layouts and downstream calls. The manifest records every
CALL, JE/JNE and RET rather than assuming the prior two-caller body offsets.

The public manifest contains bounded instruction windows, not the private
export. Private replay checks complete body hashes, every byte and instruction
boundary, analyzed overrides, independent 32-bit Capstone decoding, every
CALL, branch, fallthrough and RET. All fourteen selected original records have
complete coverage and no flow overrides. Exact index-row and export-record
fingerprints also reject substitutions of analyzed metadata and display text.
These checks establish consistency with the original-body inventory, not full
retail-XBE reauthentication. The required original XBE SHA-256 remains
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.

## Known mismatches deliberately left unresolved

Let S be the caller's entry ESP. Each original caller:

1. Saves incoming ECX and copies that saved word onto the outgoing stack.
2. Forwards S+4 and S+8 as the two explicit callee stack operands.
3. Loads **EAX from S+12** before CALL. This register input is absent from the
   unchanged two-argument source call.
4. Supplies the saved incoming ECX as an **extra outgoing stack word** absent
   from the source call.
5. Adds 16 to ESP and executes a plain RET, preserving the callee's EAX. The
   existing source caller is still **void and discards returned EAX**.

Six callees retain incoming EAX in EDI, later moving EDI to EAX. Callee
`0x0020db30` instead retains incoming EAX in ESI and returns ESI through EAX.
It also has additional conditional branches. Callee `0x0020d870` uses a distinct
stack-load/register layout and an additional conditional branch. The gate
checks each body's own register windows and complete flow, without declaring
those hidden inputs represented by the C++ drafts.

All seven callees' source `in_EAX` pseudo-locals remain unbound. No value is
invented, no argument is appended and no type or return is repaired. The
unsigned `undefined4` caller arguments and signed `int` callee parameters are
existing draft types; admitting their declarations does not establish a guest
signedness or high-word conversion contract.

Downstream register handoffs, flags, guest memory translation, pointer widths,
object lifetime and full function semantics remain unresolved. Downstream E8
operands are verified, but downstream complete bodies/interfaces are outside
this batch. Do not execute the callers or callees as reconstructed game code.
No original code, compiled game draft, caller fixture or synthetic replacement
is executed. There is no linkage, behavior, gameplay, 1:1 or byte-match claim.

## Reproducible checks

Public checks require Clang++ with C++17 support and no private export:

```sh
python3 tools/verify_cpp_20261105_seven_source_declarations.py
python3 tools/test_cpp_20261105_seven_source_declarations.py -v
```

Private replay optionally adds the indexed export and local Capstone module:

```sh
python3 tools/test_cpp_20261105_seven_source_declarations.py \
  --private-export "$BF_PRIVATE_EXPORT" --tooldeps "$BF_TOOLDEPS" -v
```

The verifier reads pinned files as raw bytes, preserving LF/CRLF differences.
Tests reject LF-to-CRLF and mixed-newline mutations of every caller, callee,
header and validation-support file. Removing only the added declaration and
comment must restore each caller byte for byte, including its Git blob hash.
Historical inventory rows remain evidence of their original snapshot rather
than claims about current-source digests.

Every caller, unchanged callee and combined translation unit passes O0/O2
syntax and object compilation. Combined static assertions pin the exact
callee `int(int,int)` and caller `void(undefined4,undefined4)` types. Removing
the declaration restores the original undeclared-identifier error. Mutating
the return type, pointer parameter or arity is rejected at both optimizations:
**84 positive compile checks and 56 negative checks**. No object is linked or
executed.

Public tests reject **933 metadata-leaf mutations** and **387 individual
instruction-window byte mutations**. Private tests cover **14 bodies,
590 bytes and 251 instructions**, rejecting **3,774 record-leaf, 1,180 byte
and 182 index-leaf mutations**. An additional **3,690 structural/byte/flow
controls** refresh only the test fixture's outer record fingerprint so that
independent checks, rather than that fingerprint, must reject corruptions.
Duplicate indices, duplicate JSON keys and truncated records fail. Public-only
tests explicitly report private replay as skipped when inputs are absent.

Existing CI steps are preserved and one seven-declaration test step is added.
Independent review, the existing provenance/source tests and a complete
13,694-source audit must be performed on the final integrated tree. Syntax
progress remains separate from original ABI recovery and tested behavior.
Retail original code is preserved; verified demo-only exclusions belong only
at the later Reloaded packaging boundary.
