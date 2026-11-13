#!/usr/bin/env python3
"""Bounded guest DWORD values/source declarations; never a whole-function ABI claim."""
import argparse
from collections import Counter
import csv
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys

from body_hash_labels import read_body_digest
from source_layout import source_path
from verify_cpp_guest_address_literals import mov_memory_imm32
import verify_cpp_002e9c30_continuation as continuation_gate

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'metadata/cpp_20261101_literal_declarations.json'
OVERLAY_MANIFESTS = (
    ('metadata/cpp_20261101_literal_overlay_12.json', 12),
    ('metadata/cpp_20261101_literal_overlay_2.json', 2),
)
NEW_OVERLAY_ENTRIES = {'0x000a9b90', '0x00173720'}
XBE_SHA = 'B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721'
EXPORTED_INSTRUCTION_MANIFEST = 'metadata/cpp_20261104_guest_initializers.json'
EXPORTED_INSTRUCTION_MANIFEST_SHA = 'd66a70ab9ebc052266638955ea78133344bef7568587bf918c59db0c3619226d'
EXPORTED_INSTRUCTION_OVERLAYS_SHA = '362398476e0c86c464c482220dfc81bfd35177e10c750d6c47a4a741a337a755'
# A separate evidence channel: do not widen the earlier initializer's allowlist.
HEAP_FREE_MANIFEST = 'metadata/cpp_20261104_heap_free_scalar_calls.json'
HEAP_FREE_MANIFEST_SHA = '1254d95cc4a3f3b6710342e30c91dbf8fcb8a9d13b93f41d0a4672a87642992e'
REMAINING_MANIFEST = 'metadata/cpp_20261101_remaining_literal_repairs.json'
HEAP_FREE_BATCHES = {
    MANIFEST: {
        'entries': {'0x0008dcf0', '0x000c0040'},
        'overlays_sha256': 'aaf9268e1e7adee3b213e01aab6ddcaea8ecd2e4b54404369f500a93e4563453',
        'ledger_sha256': 'a5ad8f63714151ddcc66088df4999c54cf988c4e11699f2495410f306506aeef',
        'counts': None,
    },
    REMAINING_MANIFEST: {
        'entries': {'0x0023cca0', '0x002ea08b', '0x002ea0ca'},
        'overlays_sha256': 'a5314acb7498a1c1e3ff23f77d205a41fa823aeb56aa470253282fd4f7e8a0d8',
        'ledger_sha256': 'e8215f264ed96b97af09c41f1c9f2e8fc26e41437225efe6cfbcce53e0d54448',
        'counts': {'total':209,'complete':0,'partial':209,'values':469},
    },
}


# Source-intent spelling only: no XBE instruction evidence is asserted here.
# Keep separate from the independently instruction-gated 14-case overlays.
# A later independently XBE-checked guest32 rewrite superseded this one
# historical 250-case *partial* DWORD literal draft. Keep that historical
# verifier's source and original preimage exact, rather than silently dropping
# its entry or widening the original literal operation allowlist.
# Source fixture is pinned to the SHA of commit 6eea3e8 and the manifest.
SUPERSEDED_GUEST32_SOURCES = {
    '0x00092330': {
        'entry': '0x00092330',
        'body_sha256': 'E805E1BA7DF3574644C849BD018870B4AB3BDB33EC928D9D82F17BFD56259609',
        'historical_sha256': 'bd1ff47924c1614406168308f5193e29004bc3fcc55d9aadd79c19fd222019a2',
        'current_sha256': '6f631aa1a4b6d62f40660b4c3e47f3476da0d62e5ad9e886bedbf4208e14f587',
        'fixture': 'tests/fixtures/original_0x00092330_post_literal_20261113.txt',
    },
    '0x00093480': {
        'entry': '0x00093480',
        'body_sha256': '108B6E5C8501BA77F4103F4C1F62B26794BBBF52964AB0420062E929A45CB9DE',
        'historical_sha256': 'f573d96f1950796280f9d5005a69529b13f8ee77209d4007035650b3663c2538',
        'current_sha256': '66387eb1311b5007d904b292df8692cae7781e87628d17d7707fcd4dea85bc95',
        'fixture': 'tests/fixtures/original_0x00093480_post_literal_20261113.txt',
    },
    '0x00094f20': {
        'entry': '0x00094f20',
        'body_sha256': '1C7243D9BF5B03DE96A7F9E1CC6AEE0C942D1811E91DA023778515825F6774C3',
        'historical_sha256': 'e4dd7fadab899f4c72cab6b48e24873b4a0da0d7f4f98ddc1842b06b7ba02c62',
        'current_sha256': 'fe0388fd95caf32aae0f90964c7071a028052e9ac668486b24651fb2cb710b4c',
        'fixture': 'tests/fixtures/original_0x00094f20_post_literal_20261113.txt',
    },
    '0x000979d0': {
        'entry': '0x000979d0',
        'body_sha256': '21DDAB2FB58E5E233DA717C49CABB13A44D5864E36B15DE5D0AAB1FDCEA47F56',
        'historical_sha256': 'c2c98f4296da134411eeeb640bfb524ae14368beaae4e8517c7bac1fb3066c93',
        'current_sha256': 'c5d2096dc2eb1990f5c8117d96b014bf09914826cb4d79fa6abaa5b6d92808e6',
        'fixture': 'tests/fixtures/original_0x000979d0_post_literal_20261113.txt',
    },
    '0x00099210': {
        'entry': '0x00099210',
        'body_sha256': 'B686AD91DFA8141678552F23C06FD0F2DF500FC9EDC3FC8F1EEC63E2F67B3AAB',
        'historical_sha256': 'fa4011d5b0e5b388db652e0bb6f83208668add11816ae800ea537384fd5a1c3a',
        'current_sha256': 'b8322e0fbe891f30a49a4aa7eb038ec2447c7544947e3b51423684f24dc0910b',
        'fixture': 'tests/fixtures/original_0x00099210_post_literal_20261113.txt',
    },
    '0x000998c0': {
        'entry': '0x000998c0',
        'body_sha256': '56AF7A4BBC9EE0560436C8562DE5BF6AD964E94D437101506289F00190AD03BF',
        'historical_sha256': 'ccf4434cf29ec7ec965a47bd4bf16ed1c996e67075b56cfe3cf8bbe8aa63a5ad',
        'current_sha256': '8bd15fc95f3deb864b71df57e5318c230de5486f1babab4d80a10c80c4e63215',
        'fixture': 'tests/fixtures/original_0x000998c0_post_literal_20261113.txt',
    },
    '0x0009a690': {
        'entry': '0x0009a690',
        'body_sha256': '2F80EF5239DC488F935B07465F6CAE75FADBAC5DED6DBCEF40A0909345C34F2C',
        'historical_sha256': '66393be78d3c3ec887f08d32a6d0c5b0fe19e34164798bd359b4bdf04c9bedf5',
        'current_sha256': 'd583cb34213c1cb1dd9426b4935c9123b6e1d71c0edd8f433f8df20c8141354a',
        'fixture': 'tests/fixtures/original_0x0009a690_post_literal_20261113.txt',
    },
    '0x0009e740': {
        'entry': '0x0009e740',
        'body_sha256': '19352416C5DE929E8FC869C4B794B95AE0B27D1CDAC199EE4C8BEDF04BF6AC2F',
        'historical_sha256': 'e69353ec921e1762b3b5abb36726154ebe5ca02aec7b4cd63d2ac5830a76655f',
        'current_sha256': '9db5d8bd8088700d02878566dfc9c40d5b165cf0774e67e830719106d8d5973d',
        'fixture': 'tests/fixtures/original_0x0009e740_post_literal_20261113.txt',
    },
    '0x000a91e0': {
        'entry': '0x000a91e0',
        'body_sha256': 'BEAD1F78C43C62168FC699627F8346E0BFA342B3A472DDC81501F7EF598E6E6B',
        'historical_sha256': '5a5db030d36cdd12abc7ff14e18739664043e006bc72c2518c10dad2b476ab49',
        'current_sha256': '8d6bb912041390f6051cab4159ceb1bc89c75061c7928d7c8521c69d6f37d7c3',
        'fixture': 'tests/fixtures/original_0x000a91e0_post_literal_20261113.txt',
    },
    '0x00255b70': {
        'entry': '0x00255b70',
        'body_sha256': 'E8ACB3CEF8ED988BF2E7B14F129DB0B646130F9B2CFCA5A64D68DDF4E2E75952',
        'historical_sha256': 'a20a4939133c174d280f58227e3457c9142e656e4546b6a0baa57ca7a116dd15',
        'current_sha256': '4b5dd034dd68b79464c4f1baca7018636c0534e47f3e9565b6617d9a14d9b375',
        'fixture': 'tests/fixtures/original_0x00255b70_post_literal_20261113.txt',
    },
    '0x00256d80': {
        'entry': '0x00256d80',
        'body_sha256': '9578F74CD30AEB9CED11D2285047B3FEE1D0D965129B2F45B7D4C1F81958DE6D',
        'historical_sha256': '0de70e2218554bfe361f35ad276cc7adc149c4df2f41b245243ac4bde39eb841',
        'current_sha256': '47a81834c2d12437918b61f5b6eac52e49e7b45e8bb808e2a97f2dc426fea2fd',
        'fixture': 'tests/fixtures/original_0x00256d80_post_literal_20261113.txt',
    },
    '0x0025bd50': {
        'entry': '0x0025bd50',
        'body_sha256': 'A40C381CF72B4B50AB316CF2079A43553BE3C1484D8EA2AB7EA52896561FD020',
        'historical_sha256': '9b6e46eaa824994233bdddb3ea3c0cceee21495caa5842ea98a590895167fc0f',
        'current_sha256': '706bd4fa8dd70535cad4935169c18f26cb384defd7883258b94029222b0c6fe5',
        'fixture': 'tests/fixtures/original_0x0025bd50_post_literal_20261113.txt',
    },
    '0x00261fb0': {
        'entry': '0x00261fb0',
        'body_sha256': 'CCCB1036388E1081DD57AE02BDF946D114D0DCE7A6D7143B902C406E6B4C0166',
        'historical_sha256': 'e7e4796075c0236eb72bd75be197a57511420564ede55b4bc432dfd288443ebd',
        'current_sha256': '792e0745a0f5fefcc38184b017140c4cb30d39b83b07734817902f213f5c3f71',
        'fixture': 'tests/fixtures/original_0x00261fb0_post_literal_20261113.txt',
    },
    '0x00263270': {
        'entry': '0x00263270',
        'body_sha256': '2B1C3DB089EB9B0C47E1B121A630ABED77ECD5B9FFFD86259B9E69B39F3A7E7E',
        'historical_sha256': 'e22975cf5de1b01fd1da79ad090805b5cdf409c279674b29944c03268d06d413',
        'current_sha256': '1f7f03b06bbff4624475bd435c3d17ae7337113c06bbd710e04881a6176c33d6',
        'fixture': 'tests/fixtures/original_0x00263270_post_literal_20261113.txt',
    },
    '0x0027c260': {
        'entry': '0x0027c260',
        'body_sha256': '7A175F3557C5AFE0E3822533CAA0A3B67805A227387ECD61A832F8E9A66059D9',
        'historical_sha256': 'f81b5313c1a9bb4b3e3c691eef8417f2026394f3b5d451400a2e485217adcbc3',
        'current_sha256': 'dd0390f883e50dd178e1ff13c9dbd5294c45adb955629c165477a04ace593e61',
        'fixture': 'tests/fixtures/original_0x0027c260_post_literal_20261113.txt',
    },
    '0x0027c3e0': {
        'entry': '0x0027c3e0',
        'body_sha256': 'C06C8DD4878EAABB287D3AB724771341B860854D375610D2890830C02BF5D4E0',
        'historical_sha256': '49fd949ce56a3715ce7ce8528b52c9761baf8ca8265103df73cff30a1428cbea',
        'current_sha256': 'e7f5683721ea4912d01eaaf5d6a9c0cd9715accea732dc165d96f230e0cd5be8',
        'fixture': 'tests/fixtures/original_0x0027c3e0_post_literal_20261113.txt',
    },
    '0x0029fbe0': {
        'entry': '0x0029fbe0',
        'body_sha256': '6B90EDAD0D9A78B6F7D0727F4F306C8F624BEE8495A8F8A31FD1CCE0D41C968B',
        'historical_sha256': 'fac23c43260926ae47ecd9a8019f0293e541a1efd5114dbcd358e3b481bb20dd',
        'current_sha256': '01e9b7332b469991e9dcd81e7145bc3a5ab2b0826e389e0d43be490e6fa99523',
        'fixture': 'tests/fixtures/original_0x0029fbe0_post_literal_20261113.txt',
    },
    '0x00311b03': {
        'entry': '0x00311b03',
        'body_sha256': '7A83B0C387114D8F1A7AB1E629BFDF90497E0B11E54EDDDA319A39949712D669',
        'historical_sha256': '61a6205293acca605c07fb89e4842162cd1200ca2bacf69d404e522200c7ac11',
        'current_sha256': 'f8b3bdd8294cf940344234f18d6d74b6a3cb647286dccc83f5fb03e374cee83d',
        'fixture': 'tests/fixtures/original_0x00311b03_post_literal_20261112.txt',
    },
    '0x0031aa6e': {
        'entry': '0x0031aa6e',
        'body_sha256': 'D5A21810BF144AC242E095C71B4622FA5B696A16FE81DA5BFD9C34E1BE4542B2',
        'historical_sha256': '79023565058ae92b299fdb9ae51f478b24314f292fa8d94706a940a1359786a4',
        'current_sha256': '57badbb25e3465639311e1476b9f5d922dbcc1ae22091e06e7efeecbfdf7d1c9',
        'fixture': 'tests/fixtures/original_0x0031aa6e_post_literal_20261112.txt',
    },
    '0x0001d470': {
        'entry': '0x0001d470',
        'body_sha256': '9D9A8EBA1FF910609ABDE98C000B99E3AE58251E5FFEDCEE9E1768D7710C511E',
        'historical_sha256': '260647b96dae33ff90722a8f0962f7ec4eac28366c7c54e06e47c1aecfd0c332',
        'current_sha256': '7b9abe5b1f92e7bdcc362a53e29dcc3ea0c617e14f0f1cb6723717336f15f87d',
        'fixture': 'tests/fixtures/original_0x0001d470_post_literal_20261105.txt',
    },
    '0x001736a0': {
        'entry': '0x001736a0',
        'body_sha256': 'DD9E08C3484F856CCED33FC3C5F5512CE2C69949645BCA707669312BF262B4C8',
        'historical_sha256': '5d493975c00972884a5d3ae1914dfb0914e1b81f16e4bd8f562905f06b127bba',
        'current_sha256': '1e5d3a18ef355560ded772ba198f1fa0a73a17221ef6dd7d3b2c2682d4b2ec25',
        'fixture': 'tests/fixtures/original_0x001736a0_post_literal_20261107.txt',
    },
    '0x002e7580': {
        'entry': '0x002e7580',
        'body_sha256': '205EC72C6826C01320D87261F17580333696C778127427C642D63532DBCCC1F2',
        'historical_sha256': 'f65c7b8a758ff77e73b08e096022ca572ab06f15c2554304541ada4861057551',
        'current_sha256': 'a9c445eb7a03dcfbf34263b62b8f4cfa0a9f11601df6fb1167b477b6e1da86ff',
        'fixture': 'tests/fixtures/original_0x002e7580_post_literal_20261107.txt',
    },
    '0x00095cf0': {
        'entry': '0x00095cf0',
        'body_sha256': '0F3538441D49B226ED4E5098C9EA9AE347BC1BAB440FD802FC232EEC307CB8C6',
        'historical_sha256': '6b6935e1f5a38452bdf08016c58b812be0b3b5db57257233d27e0dc9c076d222',
        'current_sha256': '5bbd0241b9d772c5bf98d93e1dc90df5dbba231306e1f934de7bdc163c710180',
        'fixture': 'tests/fixtures/original_0x00095cf0_post_literal_20261107.txt',
    },
    '0x000968e0': {
        'entry': '0x000968e0',
        'body_sha256': '0144D044D67307F6BBFE271AFAB9348C6401A897176DD9A93814060F63E1EF2C',
        'historical_sha256': 'ca013a3d7f9ace10520140470f9727ee251f7f44fce52e2260dd9cfe319a77f9',
        'current_sha256': '4095feb45f11aa84fd2be9f2c1e121bf65b1df7b963343bb08ef39d48a57ce9a',
        'fixture': 'tests/fixtures/original_0x000968e0_post_literal_20261107.txt',
    },
    '0x00098500': {
        'entry': '0x00098500',
        'body_sha256': 'EE6A57E0AED8109D6B74301C9D31E711D5E10C346FCB9C586F8DA93C2576E048',
        'historical_sha256': '093996e9e67f06e800f0df59525086424ba1e3ba5676486a1c07260ad3b0389b',
        'current_sha256': 'ed7016627289935a929a73597536e24d307e4650f775b376404690c59a0384a2',
        'fixture': 'tests/fixtures/original_0x00098500_post_literal_20261107.txt',
    },
    '0x0009c5e0': {
        'entry': '0x0009c5e0',
        'body_sha256': 'B3B00C206159F6F348B6EE1573F3E5E1F2AE9684A3B7EBACC303F16ED23624BC',
        'historical_sha256': '3fe66b0a2bfb714483049a2258ec1eb3cad613a9f335bd35630d9ac3b871689e',
        'current_sha256': '856254f25248e15c0a286b12ca20d7c8e25016a39e6f60ec00951a207ab6b753',
        'fixture': 'tests/fixtures/original_0x0009c5e0_post_literal_20261107.txt',
    },
    '0x0009da70': {
        'entry': '0x0009da70',
        'body_sha256': '5A3B1C7B2563FC7D6C4493E5DD748F94B2A0FBCB5E1DA387FED8E949293732A2',
        'historical_sha256': 'c169f0676e0d8f7fdce1db498d044cf5f78544e143c277e76518975383b23e88',
        'current_sha256': '7d70f77f74a75cd43c768634d707622655ee1b6f5a5691596634382532e72f91',
        'fixture': 'tests/fixtures/original_0x0009da70_post_literal_20261107.txt',
    },
    '0x000a1e90': {
        'entry': '0x000a1e90',
        'body_sha256': '0E0F519CDB3FEE7324564E3D94E2B4E393423A2B91B9A12F3EDA4C25353B5399',
        'historical_sha256': '39ab1eef9f00a94086dbe247902b1153fdd3452b2911a42c2fae9df32722b63b',
        'current_sha256': '160d72003f67aee6d1480927258b75e1a3ee853b1cf4a0d3900d8f198f082c2a',
        'fixture': 'tests/fixtures/original_0x000a1e90_post_literal_20261107.txt',
    },
    '0x000a2dc0': {
        'entry': '0x000a2dc0',
        'body_sha256': 'F87750C4AC884185F10CE87D6BF8778047D919E17A41AD117ED20CB35729B7CA',
        'historical_sha256': '3732368aa58624409b870306e01890a2abfac148418ee6c4ae6c5d289c570f03',
        'current_sha256': '64580034cf4c160440d58eb7ec46ce68e60ca2df09efa74aa3ccad5df197d5af',
        'fixture': 'tests/fixtures/original_0x000a2dc0_post_literal_20261107.txt',
    },
    '0x000a34a0': {
        'entry': '0x000a34a0',
        'body_sha256': 'C2667195FDC354335126E8C56BFF69617C0041709AD52E3AFDC46DA99D7C5544',
        'historical_sha256': '910cdc2786487eaab36b1734453acfa5e6d8d96f4a74301c17d7ce5adb747f72',
        'current_sha256': 'bcf1f51561b4cd05f52df9c65784ba345bb739a48118fa7f92f8bfaa3158ebcf',
        'fixture': 'tests/fixtures/original_0x000a34a0_post_literal_20261107.txt',
    },
    '0x000a3b10': {
        'entry': '0x000a3b10',
        'body_sha256': '01FF57616C921F70EAF7BEBEEF8214CAF60507F7683C4B566EAB18B397E63417',
        'historical_sha256': 'fbbf16a4c74f1f264522954eb432e1a9135ba82ad5c80bb572a4f3977468bea3',
        'current_sha256': '0a3b8785d64f034a881a6cee90f5683035fa7d56b0d1a73cbe0afa9e79134e65',
        'fixture': 'tests/fixtures/original_0x000a3b10_post_literal_20261107.txt',
    },
    '0x000a6fd0': {
        'entry': '0x000a6fd0',
        'body_sha256': '154B5D2CD6C7B93199924C77D290347322109C9D14A24123763D4656BEBF3357',
        'historical_sha256': '8765494e79db6b5dfad960e45f7669142001964fd25e3de2c1c8e45e0d70de67',
        'current_sha256': 'df09021d00558698c69c7449881130dcaa2ec9915b58caf3d1b302bc3bff4141',
        'fixture': 'tests/fixtures/original_0x000a6fd0_post_literal_20261107.txt',
    },
}


def historical_literal_source_for_guest32_rewrite(case, text):
    """Recover one exact historical literal draft; never accept a changed rewrite.

    This is not a new declaration, an x86 ABI claim or a generated source
    repair: it preserves the previous verifier's immutable input identity.
    """
    guard = SUPERSEDED_GUEST32_SOURCES.get(case['entry'])
    if guard is None:
        return text
    if (case['body_sha256'] != guard['body_sha256']
            or case['status'] != 'partial'
            or case['result_source_sha256'] != guard['historical_sha256']):
        raise ValueError('Superseded source provenance/identity differs')
    current = sha(text)
    if current == guard['historical_sha256']:
        return text  # Historical regression fixtures remain valid.
    if current != guard['current_sha256']:
        raise ValueError('Changed XBE-evidenced guest32 rewrite: '+case['entry'])
    historical = (ROOT / guard['fixture']).read_text(encoding='utf-8')
    if (sha(historical) != guard['historical_sha256']
            or read_body_digest(historical) != (guard['body_sha256'], False)
            or read_body_digest(text) != (guard['body_sha256'], False)
            or 'ABI_UNVERIFIED' not in text):
        raise ValueError('Historical guest32 literal provenance differs')
    return historical


SOURCE_SPELLING_OVERLAYS = {
    '0x0036fbe0': {
        'entry': '0x0036fbe0',
        'before': 'piVar5 = puVar3 + 0x12;',
        'after': 'piVar5 = reinterpret_cast<int*>(puVar3 + 0x12);',
        'prior_sha256': '37cf2da57b82d3406158bebb677b0c5efc3eaae6f078254a6b994f7ed1371b3a',
        'current_sha256': 'fd15b64ab81e472077a02dfb8aea932baab898bdc0be10bb6ac3af77985b47e0',
        'body_sha256': 'BECC2D4674649A4CA3CED23B293B7A2A45446A377E079EEDC3BAC01419960165',
    },
}


def restore_source_spelling(case, text, source_spelling_overlays=None):
    overlays = source_spelling_overlays or {}
    if overlays and overlays != SOURCE_SPELLING_OVERLAYS:
        raise ValueError('Source-only spelling overlay pins differ')
    overlay = overlays.get(case['entry'])
    if overlay is not None:
        if (case['status'] != 'partial'
                or case['body_sha256'] != overlay['body_sha256']
                or case['result_source_sha256'] != overlay['prior_sha256']
                or sha(text) != overlay['current_sha256']
                or text.count(overlay['after']) != 1
                or overlay['before'] in text):
            raise ValueError('Changed source-only spelling overlay: ' + case['entry'])
        text = text.replace(overlay['after'], overlay['before'], 1)
        if sha(text) != overlay['prior_sha256']:
            raise ValueError('Source-only spelling preimage differs')
    return text


def sha(text):
    return hashlib.sha256(text.encode()).hexdigest()


def validate_exported_instruction_overlays(overlays):
    """Pin the exact export-evidenced case independently of caller-supplied hashes.

    This third evidence class is neither an image-verified overlay nor a
    source-spelling-only change. The original XBE is not authenticated here.
    """
    if overlays and (set(overlays) != {'0x0009e8b0'} or
            sha(json.dumps(overlays, sort_keys=True, separators=(',', ':'))) !=
            EXPORTED_INSTRUCTION_OVERLAYS_SHA):
        raise ValueError('Exported-instruction overlay pins differ')


def load_exported_instruction_overlays(root):
    raw = (root / EXPORTED_INSTRUCTION_MANIFEST).read_bytes()
    if hashlib.sha256(raw).hexdigest() != EXPORTED_INSTRUCTION_MANIFEST_SHA:
        raise ValueError('Exported-instruction evidence manifest changed')
    document = json.loads(raw)
    if (document['original_xbe_sha256'] != XBE_SHA or
            document['original_xbe_reauthenticated'] is not False or
            document['original_game_functions_executed'] is not False):
        raise ValueError('Exported-instruction evidence boundary changed')
    overlays = {c['entry']: c for c in document['cases'] if c['entry'] == '0x0009e8b0'}
    if not overlays:
        raise ValueError('Exported-instruction overlay is missing')
    validate_exported_instruction_overlays(overlays)
    return overlays


def restore_exported_instruction(case, text, exported_instruction_overlays=None):
    overlays = exported_instruction_overlays or {}
    validate_exported_instruction_overlays(overlays)
    overlay = overlays.get(case['entry'])
    if overlay is None:
        return text
    if (case['status'] != 'partial' or case['source'] != overlay['source'] or
            case['body_sha256'] != overlay['original_body_sha256'] or
            case['body_ranges'] != overlay['body_ranges'] or
            case['result_source_sha256'] != overlay['source_before_sha256'] or
            sha(text) != overlay['source_after_sha256']):
        raise ValueError('Changed exported-instruction overlay: ' + case['entry'])
    for edit in reversed(overlay['replacements']):
        if edit['count'] != 1 or text.count(edit['after']) != 1:
            raise ValueError('Exported-instruction replacement occurrence differs')
        text = text.replace(edit['after'], edit['before'], 1)
    raw = text.encode()
    blob = hashlib.sha1(b'blob ' + str(len(raw)).encode() + b'\0' + raw).hexdigest()
    if sha(text) != overlay['source_before_sha256'] or blob != overlay['preimage_git_blob']:
        raise ValueError('Exported-instruction historical result preimage differs')
    return text


def apply_exported_instruction(case, text, exported_instruction_overlays=None):
    overlays = exported_instruction_overlays or {}
    validate_exported_instruction_overlays(overlays)
    overlay = overlays.get(case['entry'])
    if overlay is not None:
        for edit in overlay['replacements']:
            if text.count(edit['before']) != 1 or edit['after'] in text:
                raise ValueError('Original preimage exported-instruction position differs')
            text = text.replace(edit['before'], edit['after'], 1)
    return text


def validate_heap_free_overlays(overlays, ledger=None):
    """Exact per-ledger subsets of a separately pinned program-memory export."""
    if not overlays:
        return
    allowed = HEAP_FREE_BATCHES.items() if ledger is None else [(ledger, HEAP_FREE_BATCHES.get(ledger))]
    digest = sha(json.dumps(overlays, sort_keys=True, separators=(',', ':')))
    if not any(pin is not None and set(overlays) == pin['entries'] and
               digest == pin['overlays_sha256'] for _, pin in allowed):
        raise ValueError('Heap-free exported-instruction overlay pins or ledger differ')


def load_heap_free_overlays(root, ledger):
    if ledger not in HEAP_FREE_BATCHES:
        raise ValueError('Unknown heap-free historical ledger')
    raw = (root / HEAP_FREE_MANIFEST).read_bytes()
    if hashlib.sha256(raw).hexdigest() != HEAP_FREE_MANIFEST_SHA:
        raise ValueError('Heap-free exported-instruction manifest changed')
    document = json.loads(raw)
    if (document['original_xbe_sha256'] != XBE_SHA or
            document['original_xbe_reauthenticated'] is not False or
            document['original_game_functions_executed'] is not False):
        raise ValueError('Heap-free export evidence boundary changed')
    entries = {c['entry'] for c in document['cases']}
    if len(document['cases']) != 5 or entries != set().union(*(p['entries'] for p in HEAP_FREE_BATCHES.values())):
        raise ValueError('Heap-free five-case identity changed')
    overlays = {c['entry']: c for c in document['cases'] if c['historical_ledger']['ledger'] == ledger}
    validate_heap_free_overlays(overlays, ledger)
    if not overlays:
        raise ValueError('Missing heap-free historical overlays')
    return overlays


def restore_heap_free_instruction(case, text, heap_free_overlays=None):
    overlays = heap_free_overlays or {}
    validate_heap_free_overlays(overlays)
    overlay = overlays.get(case['entry'])
    if overlay is None:
        return text
    historical = overlay['historical_ledger']
    if (case['status'] != 'partial' or case['source'] != overlay['source'] or
            case['body_sha256'] != overlay['original_body_sha256'] or
            case['body_ranges'] != overlay['body_ranges'] or
            case['result_source_sha256'] != overlay['source_before_sha256'] or
            case['source_sha256'] != historical['historical_preimage_sha256'] or
            case['source_git_blob'] != historical['historical_preimage_git_blob'] or
            sha(text) != overlay['source_after_sha256']):
        raise ValueError('Changed heap-free historical overlay: ' + case['entry'])
    for edit in reversed(overlay['replacements']):
        if edit['count'] != 1 or text.count(edit['after']) != 1:
            raise ValueError('Heap-free replacement occurrence differs')
        text = text.replace(edit['after'], edit['before'], 1)
    raw = text.encode()
    blob = hashlib.sha1(b'blob ' + str(len(raw)).encode() + b'\0' + raw).hexdigest()
    if sha(text) != overlay['source_before_sha256'] or blob != overlay['preimage_git_blob']:
        raise ValueError('Heap-free historical result preimage differs')
    return text


def apply_heap_free_instruction(case, text, heap_free_overlays=None):
    overlays = heap_free_overlays or {}
    validate_heap_free_overlays(overlays)
    overlay = overlays.get(case['entry'])
    if overlay is not None:
        for edit in overlay['replacements']:
            if edit['count'] != 1 or text.count(edit['before']) != 1 or edit['after'] in text:
                raise ValueError('Original preimage heap-free position differs')
            text = text.replace(edit['before'], edit['after'], 1)
    return text


def validate_heap_free_batch(root, manifest, approved_counts, heap_free_overlays,
                             overlays, source_spelling_overlays, exported_instruction_overlays):
    if not heap_free_overlays:
        return
    candidates = [name for name, pin in HEAP_FREE_BATCHES.items() if approved_counts == pin['counts']]
    if len(candidates) != 1:
        raise ValueError('Heap-free overlay batch counts differ')
    ledger = candidates[0]
    validate_heap_free_overlays(heap_free_overlays, ledger)
    raw = (root / ledger).read_bytes()
    pin = HEAP_FREE_BATCHES[ledger]
    if hashlib.sha256(raw).hexdigest() != pin['ledger_sha256'] or json.loads(raw) != manifest:
        raise ValueError('Heap-free historical ledger changed')
    if set(heap_free_overlays).intersection(set(overlays) | set(source_spelling_overlays) | set(exported_instruction_overlays)):
        raise ValueError('Heap-free evidence classes overlap')
    for entry, overlay in heap_free_overlays.items():
        historical = overlay['historical_ledger']
        if (historical['ledger'] != ledger or historical['ledger_sha256'] != pin['ledger_sha256'] or
                manifest['cases'][historical['case_index']]['entry'] != entry):
            raise ValueError('Heap-free historical case identity differs')


def load_continuation_overlays(root):
    """One bounded continuation; never part of the earlier five-call channel."""
    return continuation_gate.load(root)


def restore_continuation_instruction(case, text, continuation_overlays=None):
    return continuation_gate.restore_to_historical(case, text, continuation_overlays or {})


def apply_continuation_instruction(case, text, continuation_overlays=None):
    return continuation_gate.reapply_to_diagnostic(case, text, continuation_overlays or {})


def restore(case, text, overlays=None, source_spelling_overlays=None, exported_instruction_overlays=None, heap_free_overlays=None, continuation_overlays=None):
    if set(continuation_overlays or {}).intersection(
            set(overlays or {}) | set(source_spelling_overlays or {}) |
            set(exported_instruction_overlays or {}) | set(heap_free_overlays or {})):
        raise ValueError('Continuation evidence classes overlap')
    text = historical_literal_source_for_guest32_rewrite(case, text)
    text = restore_continuation_instruction(case, text, continuation_overlays)
    if set(heap_free_overlays or {}).intersection(
            set(overlays or {}) | set(source_spelling_overlays or {}) | set(exported_instruction_overlays or {})):
        raise ValueError('Heap-free evidence classes overlap')
    text = restore_heap_free_instruction(case, text, heap_free_overlays)
    if set(exported_instruction_overlays or {}).intersection(
            set(overlays or {}) | set(source_spelling_overlays or {})):
        raise ValueError('Exported-instruction evidence classes overlap')
    text = restore_exported_instruction(case, text, exported_instruction_overlays)
    text = restore_source_spelling(case, text, source_spelling_overlays)
    # Compose only independently SHA-pinned later repairs; the original
    # literal-batch preimage and Git blob must still match exactly.
    overlay = (overlays or {}).get(case['entry'])
    if overlay is not None:
        if (case['status'] != 'partial'
                or sha(text) != overlay['current_sha256']
                or text.count(overlay['after']) != 1
                or overlay['before'] in text):
            raise ValueError('Changed independently reviewed overlay: ' + case['entry'])
        text = text.replace(overlay['after'], overlay['before'], 1)
        if sha(text) != overlay['prior_sha256'] or overlay['prior_sha256'] != case['result_source_sha256']:
            raise ValueError('Overlay is not an exact single-operand repair: ' + case['entry'])
    if sha(text) != case['result_source_sha256'] or text.count(case['added_block']) != 1:
        raise ValueError('Changed reviewed source: ' + case['entry'])
    before = text.replace(case['added_block'], '', 1)
    for edit in case['edits']:
        if before.count(edit['after']) != edit['count']:
            raise ValueError('Literal occurrence mismatch')
        before = before.replace(edit['after'], edit['before'])
    raw = before.encode()
    blob = hashlib.sha1(b'blob ' + str(len(raw)).encode() + b'\0' + raw).hexdigest()
    if sha(before) != case['source_sha256'] or blob != case['source_git_blob']:
        raise ValueError('Changes exceed reviewed operands/declarations')
    if overlay is not None:
        if before.count(overlay['before']) != 1 or overlay['after'] in before:
            raise ValueError('Original preimage overlay position differs: ' + case['entry'])
        before = before.replace(overlay['before'], overlay['after'], 1)
    spelling = (source_spelling_overlays or {}).get(case['entry'])
    if spelling is not None:
        if before.count(spelling['before']) != 1 or spelling['after'] in before:
            raise ValueError('Original source-only spelling position differs')
        before = before.replace(spelling['before'], spelling['after'], 1)
    before = apply_exported_instruction(case, before, exported_instruction_overlays)
    before = apply_heap_free_instruction(case, before, heap_free_overlays)
    return apply_continuation_instruction(case, before, continuation_overlays)


def compile_text(compiler, root, source, opt):
    result = subprocess.run([compiler, '-std=c++17', '-fsyntax-only', '-ferror-limit=0',
        '-Werror=pointer-to-int-cast', opt, '-I', str(root/'include'), '-x', 'c++', '-'],
        input=source, capture_output=True, text=True, timeout=60)
    errors = Counter(re.findall(r'error:\s*([^\n]+)', result.stderr))
    if result.returncode and not errors:
        raise ValueError('Compiler/tool failure: ' + result.stderr[-1200:])
    warnings = Counter(re.findall(r'warning:\s*([^\n]+)', result.stderr))
    locations = Counter((int(m[1]),m[2]) for m in re.finditer(r'<stdin>:(\d+):\d+: error:\s*([^\n]+)',result.stderr))
    return result.returncode, errors, warnings, locations


def verify(root, manifest, compiler, image=None, approved_counts=None, overlays=None, source_spelling_overlays=None, exported_instruction_overlays=None, heap_free_overlays=None, continuation_overlays=None):
    cases = manifest['cases']
    expected = manifest['expected_counts']
    overlays = overlays or {}
    source_spelling_overlays = source_spelling_overlays or {}
    exported_instruction_overlays = exported_instruction_overlays or {}
    heap_free_overlays = heap_free_overlays or {}
    continuation_overlays = continuation_overlays or {}
    continuation_gate.validate_batch(root, manifest, approved_counts, continuation_overlays,
                                     overlays, source_spelling_overlays, exported_instruction_overlays, heap_free_overlays)
    validate_heap_free_batch(root, manifest, approved_counts, heap_free_overlays,
                            overlays, source_spelling_overlays, exported_instruction_overlays)
    validate_exported_instruction_overlays(exported_instruction_overlays)
    if exported_instruction_overlays and (
            approved_counts is not None or
            set(exported_instruction_overlays) - {c['entry'] for c in cases} or
            set(exported_instruction_overlays).intersection(set(overlays) | set(source_spelling_overlays))):
        raise ValueError('Exported-instruction overlay batch identity differs')
    if source_spelling_overlays and (
            source_spelling_overlays != SOURCE_SPELLING_OVERLAYS
            or approved_counts != {'total':209,'complete':0,'partial':209,'values':469}
            or set(source_spelling_overlays) - {c['entry'] for c in cases}
            or set(source_spelling_overlays).intersection(overlays)):
        raise ValueError('Source-only spelling overlay batch identity differs')
    # Existing instruction-gated callers keep the exact 14-case gate.
    if overlays and (len(overlays) != 14
            or any(c['entry'] in overlays and c['status'] != 'partial' for c in cases)
            or set(overlays) - {c['entry'] for c in cases}):
        raise ValueError('Reviewed 14-case overlay identity/status differs')
    if expected != (approved_counts if approved_counts is not None else {'total':250,'complete':29,'partial':221,'values':483}):
        raise ValueError('Reviewed batch totals changed')
    if len(cases) != expected['total'] or len({c['entry'] for c in cases}) != len(cases):
        raise ValueError('Batch size/identity differs')
    if manifest['original_xbe_sha256'] != XBE_SHA:
        raise ValueError('Original image identity changed')
    with (root/'metadata/bulk_13694_inventory.csv').open(encoding='utf-8') as stream:
        inventory = {r['entry']:r for r in csv.DictReader(stream)}
    texts = {c['entry']:source_path(root,c['entry']).read_text(encoding='utf-8') for c in cases}
    preimages = {c['entry']:restore(c,texts[c['entry']],overlays,source_spelling_overlays,exported_instruction_overlays,heap_free_overlays,continuation_overlays) for c in cases}
    full = partial = values = 0
    for case in cases:
        text = texts[case['entry']]
        path = source_path(root,case['entry'])
        if path.relative_to(root).as_posix() != case['source']:
            raise ValueError('Noncanonical source path')
        if read_body_digest(text) != (case['body_sha256'],False):
            raise ValueError('Original body label changed')
        row = inventory[case['entry']]
        historical_text = restore_continuation_instruction(case, text, continuation_overlays)
        historical_text = restore_heap_free_instruction(case, historical_text, heap_free_overlays)
        historical_text = restore_exported_instruction(case, historical_text, exported_instruction_overlays)
        inventory_sha = overlays[case['entry']]['prior_sha256'] if case['entry'] in overlays else sha(restore_source_spelling(case,historical_text,source_spelling_overlays))
        if case['entry'] in SUPERSEDED_GUEST32_SOURCES:
            # Inventory tracks the older verified source; the source-only
            # guest32 rewrite must independently match its exact SHA above.
            historical_text = historical_literal_source_for_guest32_rewrite(case, historical_text)
            inventory_sha = sha(historical_text)
        if row['original_body_sha256'] != case['body_sha256'] or row['c_sha256'] != inventory_sha:
            raise ValueError('Inventory fingerprint differs')
        if 'ABI_UNVERIFIED' not in text:
            raise ValueError('Verification boundary lost')
        for edit in case['edits']:
            if not re.fullmatch(r'&[A-Za-z_]\w*_[0-9a-f]{8}',edit['before']):
                raise ValueError('Not an address expression')
            address = int(edit['before'][-8:],16)
            if edit['after'] != f'UINT32_C(0x{address:08x})' or len(edit['instructions']) != edit['count']:
                raise ValueError('Address/occurrence mismatch')
            for ins in edit['instructions']:
                if mov_memory_imm32(bytes.fromhex(ins['bytes'])) != address:
                    raise ValueError('Not the original DWORD immediate')
                values += 1
        for dep in case['dependencies']:
            callee = source_path(root,dep['entry']).read_text(encoding='utf-8')
            if dep['entry'] in preimages:
                callee = preimages[dep['entry']]
            if sha(callee) != dep['source_sha256']:
                raise ValueError('Callee changed since review: '+dep['entry'])
            if ' '.join(dep['signature'].split())+' {' not in ' '.join(callee.split()):
                raise ValueError('Signature differs from real source definition')
            if 'extern '+dep['signature']+';\n' not in case['added_block']:
                raise ValueError('Declaration not source matched')
        effective_status = 'complete' if case['entry'] in overlays or case['entry'] in source_spelling_overlays or case['entry'] in exported_instruction_overlays or case['entry'] in heap_free_overlays or case['entry'] in continuation_overlays or case['entry'] in SUPERSEDED_GUEST32_SOURCES else case['status']
        for opt in ('-O0','-O2'):
            old_rc, old, old_warnings, old_locations = compile_text(compiler,root,preimages[case['entry']],opt)
            rc, errors, warnings, locations = compile_text(compiler,root,text.replace(case['added_block'],'',1) if effective_status=='partial' else text,opt)
            if effective_status == 'partial' and warnings-old_warnings:
                raise ValueError('Repair introduced a warning: '+case['entry']+str(warnings-old_warnings))
            if not old_rc:
                raise ValueError('Preimage was not a failure')
            if effective_status == 'complete':
                if rc:
                    raise ValueError('Whole-file syntax failed: '+case['entry']+str(errors))
            elif effective_status == 'partial':
                removed = old-errors
                original = preimages[case['entry']]
                address_lines = {original.count('\n',0,m.start())+1 for e in case['edits'] for m in re.finditer(re.escape(e['before']),original)}
                removed_locations = old_locations-locations
                if locations-old_locations or sum(removed_locations.values()) != sum(removed.values()):
                    raise ValueError('Diagnostic locations changed outside repaired expressions')
                for (line,message) in removed_locations:
                    if line not in address_lines or not re.search(r"'(?:undefined4|uint32_t|int32_t|uint|int)'",message) or not ('pointer to integer conversion' in message or ('cast from pointer' in message and 'loses information' in message)):
                        raise ValueError('Removed diagnostic is not a known-label DWORD conversion')
                if not rc or errors-old or not removed or sum(removed.values()) != sum(e['count'] for e in case['edits']):
                    raise ValueError('Partial diagnostic delta differs')
                if any('pointer' not in msg and 'cast from' not in msg for msg in removed):
                    raise ValueError('Removed error is outside address-value scope')
            else:
                raise ValueError('Unknown repair status')
        if effective_status == 'complete': full += 1
        else: partial += 1
        if case['entry'] in SUPERSEDED_GUEST32_SOURCES:
            # Historical literals no longer exist in the XBE-backed source.
            # Verify BOTH immutable identities: new live source and archived
            # old literal source. Reject a test that does not change bytes.
            if text.count('ABI_UNVERIFIED') < 1:
                raise ValueError('Missing live-source mutation anchor')
            mutations = (
                text.replace('ABI_UNVERIFIED','ABI_MUTATED',1),
                historical_literal_source_for_guest32_rewrite(case,text).replace(
                    case['edits'][0]['after'],'UINT32_C(0)',1),
            )
            if mutations[1] == historical_literal_source_for_guest32_rewrite(case,text):
                raise ValueError('Missing archived historical literal mutation anchor')
        else:
            mutations = (text.replace(case['edits'][0]['after'],'UINT32_C(0)',1),)
        for mutated in mutations:
            if mutated == text:
                raise ValueError('No-op changed-literal negative control')
            try:
                restore(case,mutated,overlays,source_spelling_overlays,exported_instruction_overlays,heap_free_overlays,continuation_overlays)
            except ValueError:
                pass
            else:
                raise ValueError('Changed-literal negative control escaped')
        completion = overlays.get(case['entry']) or source_spelling_overlays.get(case['entry'])
        if completion is not None:
            changed = text.replace(completion['after'], completion['before'], 1)
            try:
                restore(case,changed,overlays,source_spelling_overlays,exported_instruction_overlays,heap_free_overlays,continuation_overlays)
            except ValueError:
                pass
            else:
                raise ValueError('Changed-overlay negative control escaped')
        exported = exported_instruction_overlays.get(case['entry']) or heap_free_overlays.get(case['entry']) or continuation_overlays.get(case['entry'])
        if exported is not None:
            for edit in exported['replacements']:
                changed = text.replace(edit['after'], edit['before'], 1)
                try:
                    restore(case,changed,overlays,source_spelling_overlays,exported_instruction_overlays,heap_free_overlays,continuation_overlays)
                except ValueError:
                    pass
                else:
                    raise ValueError('Changed exported-instruction overlay control escaped')
    additional_guest32_completion = sum(c['entry'] in SUPERSEDED_GUEST32_SOURCES for c in cases)
    completions = len(overlays) + len(source_spelling_overlays) + len(exported_instruction_overlays) + len(heap_free_overlays) + len(continuation_overlays) + additional_guest32_completion
    if (full,partial,values) != (expected['complete']+completions,expected['partial']-completions,expected['values']):
        raise ValueError('Verification totals differ')
    print(f'PASS {full} complete C++17 repairs; {partial} partial repairs; {values} DWORD values; O0/O2 and preimage/corruption controls')
    if source_spelling_overlays:
        print('1 exact source-only pointer spelling completion; no new XBE instruction evidence')
    if exported_instruction_overlays:
        print('1 separately pinned exported-instruction completion; historical DWORD count unchanged; no XBE authentication claimed by this overlay')
    if heap_free_overlays:
        print(f'{len(heap_free_overlays)} separately pinned heap-free call completions; historical ledger and DWORD counts unchanged; no whole-XBE authentication claimed')
    if continuation_overlays:
        print('1 separately pinned bounded continuation completion; original 18-byte body and historical ledger unchanged; ABI/runtime unresolved')
    if additional_guest32_completion:
        print(f'{additional_guest32_completion} exact historical partial ledger sources preserved; later XBE-evidenced guest32 drafts syntactically complete; ABI/runtime unverified')
    if image is not None:
        verify_image(image, cases, overlays)
    else:
        print('Private XBE absent: instruction authenticity not rechecked')
    print('Syntax/operand facts only; original ABI, whole-function behavior and native linkage remain unverified')


def verify_image(data, cases, overlays=None):
    from audit_xbe_first_100 import mapped_span, xbe_sections
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    if hashlib.sha256(data).hexdigest().upper() != XBE_SHA:
        raise ValueError('Wrong original XBE')
    sections = xbe_sections(data)
    decoder = Cs(CS_ARCH_X86,CS_MODE_32)
    decoded = {}
    for case in cases:
        for record in [case,*case['dependencies']]:
            digest = hashlib.sha256(); instructions = {}
            for span in record['body_ranges']:
                start = int(span['start'],16)
                if int(span['end_inclusive'],16)-start+1 != span['length']:
                    raise ValueError('Body range mismatch')
                raw = mapped_span(data,sections,start,span['length']); digest.update(raw)
                ins = list(decoder.disasm(raw,start))
                if sum(i.size for i in ins) != len(raw): raise ValueError('Incomplete decoding')
                for i in ins:
                    if i.mnemonic.startswith('f') or re.search(r'\b[xyz]?mm\d\b|\b[fg]s:',i.op_str) or (i.mnemonic in ('call','jmp') and i.bytes[0] not in (0xe8,0xe9,0xeb)):
                        raise ValueError('Complex instruction escaped quarantine')
                    if i.mnemonic in ('sub','add','and','mov','lea') and i.op_str.startswith('esp,') and re.search(r'\b(?:eax|ecx|edx|ebx|esi|edi)\b',i.op_str.split(',',1)[1]):
                        raise ValueError('Dynamic guest stack contract escaped quarantine')
                    instructions[i.address] = i
            if digest.hexdigest().upper() != record['body_sha256']:
                raise ValueError('Complete original body SHA differs')
            decoded[record['entry']] = instructions
    for case in cases:
        instructions = decoded[case['entry']]
        for edit in case['edits']:
            for site in edit['instructions']:
                ins = instructions[int(site['site'],16)]
                if bytes(ins.bytes).hex() != site['bytes'] or ins.op_str != site['operands']:
                    raise ValueError('Store boundary/operands differ')
        for dep in case['dependencies']:
            for site in dep['call_sites']:
                ins = instructions[int(site['site'],16)]
                if bytes(ins.bytes).hex()!=site['bytes'] or ins.bytes[0]!=0xe8 or int(ins.op_str,16)!=int(dep['entry'],16):
                    raise ValueError('Original direct CALL differs')
        overlay = (overlays or {}).get(case['entry'])
        if overlay is not None:
            ins = instructions.get(int(overlay['site'], 16))
            if ins is None or bytes(ins.bytes).hex() != overlay['bytes']:
                raise ValueError('Independently reviewed byte/word operand differs')
    print(f'PASS pinned XBE; {len(decoded)} complete original bodies and all recorded store/CALL boundaries')


def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--xbe',type=Path);p.add_argument('--tooldeps',type=Path);a=p.parse_args()
    if a.tooldeps: sys.path.insert(0,str(a.tooldeps))
    compiler=shutil.which('clang++')
    if not compiler:p.error('clang++ is required')
    overlays = {}
    for manifest_path, expected_size in OVERLAY_MANIFESTS:
        overlay_doc = json.loads((ROOT/manifest_path).read_text(encoding='utf-8'))
        entries = {c['entry'] for c in overlay_doc['overlays']}
        if (overlay_doc['original_xbe_sha256'] != XBE_SHA
                or len(overlay_doc['overlays']) != expected_size
                or len(entries) != expected_size
                or (expected_size == 2 and entries != NEW_OVERLAY_ENTRIES)
                or entries.intersection(overlays)):
            raise ValueError('Independent overlay manifest identity differs: ' + manifest_path)
        overlays.update({c['entry']: c for c in overlay_doc['overlays']})
    if len(overlays) != 14:
        raise ValueError('Combined reviewed overlay count differs')
    verify(ROOT,json.loads((ROOT/MANIFEST).read_text(encoding='utf-8')),compiler,a.xbe.read_bytes() if a.xbe else None,overlays=overlays,
           exported_instruction_overlays=load_exported_instruction_overlays(ROOT),
           heap_free_overlays=load_heap_free_overlays(ROOT, MANIFEST))


if __name__=='__main__':main()
