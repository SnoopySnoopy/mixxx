#include "track/trackinfo.h"


namespace mixxx {

bool operator==(const TrackInfo& lhs, const TrackInfo& rhs) {
    return (lhs.getArtist() == rhs.getArtist()) &&
            (lhs.getBpm() == rhs.getBpm()) &&
            (lhs.getComment() == rhs.getComment()) &&
            (lhs.getComposer() == rhs.getComposer()) &&
            (lhs.getConductor() == rhs.getConductor()) &&
            (lhs.getGrouping() == rhs.getGrouping()) &&
            (lhs.getGenre() == rhs.getGenre()) &&
            (lhs.getISRC() == rhs.getISRC()) &&
            (lhs.getKey() == rhs.getKey()) &&
            (lhs.getLanguage() == rhs.getLanguage()) &&
            (lhs.getLyricist() == rhs.getLyricist()) &&
            (lhs.getMood() == rhs.getMood()) &&
            (lhs.getMusicBrainzArtistId() == rhs.getMusicBrainzArtistId()) &&
            (lhs.getMusicBrainzReleaseId() == rhs.getMusicBrainzReleaseId()) &&
            (lhs.getRecordLabel() == rhs.getRecordLabel()) &&
            (lhs.getRemixer() == rhs.getRemixer()) &&
            (lhs.getReplayGain() == rhs.getReplayGain()) &&
            (lhs.getSubtitle() == rhs.getSubtitle()) &&
            (lhs.getTitle() == rhs.getTitle()) &&
            (lhs.getTrackNumber() == rhs.getTrackNumber()) &&
            (lhs.getTrackTotal() == rhs.getTrackTotal()) &&
            (lhs.getYear() == rhs.getYear());
}

} // namespace mixxx
